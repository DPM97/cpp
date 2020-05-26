#include "node.h"
#include <string>
#include <iostream>
using namespace std;

node::node() {
	node last;
	node next;
	pair<int, string> val;
}


node::node(pair<int,string> value) {
	last = NULL;
	next = NULL;
	val = value;
}

node::~node() {
	last = NULL;
	next = NULL;
}