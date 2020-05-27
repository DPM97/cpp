#include "edge.h";
#include <iostream>;
using namespace std;

edge::edge() {
	start = nullptr;
	end = nullptr;
	weight = NULL;
}

edge::edge(node *start, node *end, int weight) {
	start = start;
	end = end;
	weight = weight;
}

edge::~edge() {
	start = nullptr;
	end = nullptr;
	weight = NULL;
}