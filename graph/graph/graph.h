#pragma once
#include "node.h";
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
	vector<node> getNeighbors(node *n1);
	int dijkstra(int val);
	bool addNode(int val);
};

