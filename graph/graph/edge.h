#pragma once
#include "node.h";
using namespace std;
class node;
class edge
{
public:
	edge();
	edge(node *start, node *end, int weight);
	node *start;
	node *end;
	int weight;
	~edge();
};

