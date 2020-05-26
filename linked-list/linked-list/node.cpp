#include "node.h"
#include <iostream>

node::node() {
	node last;
	node next;
	int val;
}


node::node(int value) {
	last = NULL;
	next = NULL;
	val = value;
}

node::~node() {
	last = NULL;
	next = NULL;
	val = 0;
}