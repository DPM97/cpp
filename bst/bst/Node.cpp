#include "Node.h"
#include <iostream>



Node::Node()
{
	int val;
	Node left, right, parent;
}

Node::Node(Node *parentNode, int value) {
	parent = parentNode;
	left = NULL;
	right = NULL;
	val = value;
}

Node::~Node()
{

}
