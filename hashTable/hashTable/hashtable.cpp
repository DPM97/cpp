#include "hashtable.h"
#include <string>
#include <iostream>
using namespace std;

hashtable::hashtable() {
	singly_linked *(table)[100]; //100 buckets --> each with a linked list
}


bool hashtable::add(string value) {
	pair <int, string> input;
	input.first = hash(value);
	input.second = value;
	this->table[input.first]->add(input);
	return true;
}

int hashtable::hash(string value) {
	int f = 0;
	for (int i = 0; i < value.length(); i++) {
		f += (int)value.at(i);
	}
	return f % 100;
}


hashtable::~hashtable() {

}

int main() {
	hashtable table;
	table.add("lmfao");
	cout << table.table;
	return 0;
}