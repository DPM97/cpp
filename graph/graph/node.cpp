#include "node.h";
#include <vector>;
#include <iostream>;
using namespace std;

node::node() {
	key = NULL;
	dist = NULL;
	pred = nullptr;
	edges = nullptr;
}

node::node(int data) {
	key = data;
	dist = 0;
	pred = nullptr;
	edges = new vector<edge>;
}

node::~node() {
	key = NULL;
	dist = NULL;
	pred = nullptr;
	edges = nullptr;
}