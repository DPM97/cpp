#pragma once
#include <string>
#include <iostream>
#include "singly_linked.h"
#include "node.h"
using namespace std;
class hashtable
{
public:
	hashtable();
	singly_linked *(table)[100];
	int main();
	bool add(string value);
	int hash(string value);
	~hashtable();
};

