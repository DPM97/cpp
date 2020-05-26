#pragma once
#include "node.h"
#include <string>
using namespace std;

class singly_linked
{
public:
	node *head;
	node *tail;
	singly_linked();
	bool add(int val);
	node removeTail();
	node removeHead();
	node getElementByIndex(int index);
	node getElementByValue(int val);
	string printList();
	~singly_linked();
};

