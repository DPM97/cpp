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
	bool add(pair<int,string> val);
	node removeTail();
	node removeHead();
	node getElementByIndex(int index);
	node getElementByValue(pair<int, string> val);
	~singly_linked();
};