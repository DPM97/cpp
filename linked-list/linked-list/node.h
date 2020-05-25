#pragma once
class node
{
public: 
	node *next;
	node *last;
	int val;
	node();
	node(int val);
	~node();
};

