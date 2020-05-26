#pragma once
#include <string>
using namespace std;
class node
{
public:
	node *next;
	node *last;
	pair<int,string> val;
	node();
	node(pair<int,string> val);
	~node();
};