#pragma once
using namespace std;
#include <vector>;
#include "node.h";
#include "edge.h";
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

