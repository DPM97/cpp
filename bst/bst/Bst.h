#pragma once
#include "Node.h"

class Bst
{
public:
	Node *root;
	Bst();

	Node insert(Node *node);
	Node search(int val);
	Node findMax();
	Node findMin();
	int fetchNumElements(Node *node);
	~Bst();
};

