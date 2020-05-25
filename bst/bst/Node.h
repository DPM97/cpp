#pragma once
class Node
{
public:
	Node();
	~Node();
	Node(Node *parentNode, int value);
	Node *left;
	Node *right;
	Node *parent;
	int val;
};

