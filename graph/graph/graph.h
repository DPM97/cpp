#pragma once
#include "node.h";
#include <string>;
using namespace std;
class graph
{
public:
	double weight;
	int edges;
	vector<node> *nodes;
	graph();
	~graph();
	bool addEdge(int n1, int n2, int weight);
	vector<int> getNeighbors(int val);
	int dijkstra(int val);
	bool addNode(int val);
	string printNodes();
};

