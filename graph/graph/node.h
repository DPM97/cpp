#pragma once
using namespace std;
#include <vector>;
#include "edge.h";
#include <iostream>

class node
{
public:
	int key;
	vector<edge> *edges;
	int dist;
	node *pred;
	node(int data);
	~node();
};

