#pragma once
#include "edge.h";
#include <vector>;
using namespace std;

class edge;
class node
{
public:
	int key;
	vector<edge> *edges;
	int dist;
	node *pred;
	node();
	node(int data);
	~node();
};

