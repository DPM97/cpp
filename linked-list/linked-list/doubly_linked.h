#pragma once
#include "node.h"
#include <string>
using namespace std;

class doubly_linked
{
public:
	doubly_linked();
	~doubly_linked();
	node *head;
	node *tail;
	bool add(int value);
	node removeHead();
	node removeTail();
	string print();
	node removeIndex(int index);
};

