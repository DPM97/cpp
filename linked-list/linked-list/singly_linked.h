#pragma once
#include "node.h"

class singly_linked
{
public:
	node *head;
	node *tail;
	singly_linked();
	bool add(int val);
	node removeTail();
	node removeHead();
	~singly_linked();
};

