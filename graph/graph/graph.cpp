#include "graph.h";
#include <vector>;
#include <iostream>;
#include <map>;
#include <string>;
using namespace std;

graph::graph() {
	nodes = new vector<node>;
	weight = 0;
	edges = 0;
}

bool graph::addNode(int val) {
	for (vector<node>::iterator it = this->nodes->begin(); it != this->nodes->end(); it++) {
		if (it->key == val) {
			return false;
		}
	}
	this->nodes->emplace_back(*(new node(val)));
	return true;
}

/* add edge between two nodes */
bool graph::addEdge(int node1, int node2, int weight) {
	node n1, n2;
	for (vector<node>::iterator it = this->nodes->begin(); it != this->nodes->end(); it++) {
		if (it->key == node1) {
			n1 = *it;
		}
		else if (it->key == node2) {
			n2 = *it;
		}
	}

	if (&n1 == nullptr || &n2 == nullptr) {
		cout << "Cannot add an edge to a null node" << endl;
		return false;
	}
	else {
		/* update the weight if the edge already exists */
		for (vector<edge>::iterator it = n1.edges->begin(); it != n1.edges->end(); it++) {
			if (it->end->key == n1.key && it->start->key == n2.key) {
				cout << "Weight: " << weight << endl;
				it->weight = weight;
				return true;
			}
		}
		cout << &n1.key << endl;
		n1.edges->emplace_back(*(new edge(&n1, &n2, weight)));
		return true;
	}
}

vector<int> graph::getNeighbors(int val) {
	vector<int> *neighbors = new vector<int>;
	node n1;
	for (vector<node>::iterator it = nodes->begin(); it != nodes->end(); it++) {
		if (it->key == val) {
			n1 = *it;
		}
	}
	cout << n1.key << endl;
	for (vector<edge>::iterator it = n1.edges->begin(); it != n1.edges->end(); it++) {
		cout << it->start->key << endl;
		neighbors->push_back(it->end->key);
	}
	return *neighbors;
}

int graph::dijkstra(int val) {
	map<int, node> unvisited;
	node *startNode = nullptr;
	for (vector<node>::iterator it = this->nodes->begin(); it != this->nodes->end(); it++) {
		if (it->key == val) {
			*startNode = *it;
			it->dist = 0;
			it->pred = nullptr;

		}
		else {
			it->dist = 999999999;
			it->pred = nullptr;
		}
		unvisited.insert(pair<int, node>(it->dist * 10000 + it->key, *it)); //add element to map with unique key
	}
	while (unvisited.size() > 0) {
		node curNode = unvisited.begin()->second;
		unvisited.erase(unvisited.begin());
		for (vector<edge>::iterator it = curNode.edges->begin(); it != curNode.edges->end(); it++) {
			node endNode = *it->end;
			int curWeight = it->weight;
			int altDist = curNode.dist + curWeight;
			if (altDist < endNode.dist) {
				unvisited.erase(endNode.dist * 10000 + endNode.key);
				endNode.dist = altDist;
				endNode.pred = &curNode;
				unvisited.insert(pair<int, node>(endNode.dist * 10000 + endNode.key, endNode));
			}
		}
	}

	if (startNode == nullptr) {
		return 1;
	}
	else {

	}

	return 0;
}

string graph::printNodes() {
	string str = "";
	for (vector<node>::iterator it = this->nodes->begin(); it != this->nodes->end(); it++) {
		str += (to_string(it->key) + " ");
	}
	return str;
}

int main() {
	graph g;
	g.addNode(10);
	g.addNode(20);
	cout << g.printNodes() << endl;
	g.addEdge(10, 20, 100);
	cout << g.getNeighbors(10).size() << endl;
	cin.get();
	return 0;
}

graph::~graph() {
	nodes = nullptr;
	weight = NULL;
	edges = NULL;
}