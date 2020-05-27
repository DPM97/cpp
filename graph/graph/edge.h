#pragma once
using namespace std;
#include <vector>;
#include "node.h";
class edge
{
public:
	edge();
	node *start;
	node *end;
	int weight;
	edge(node start, node end, int weight);
	~edge();
};

