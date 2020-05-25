#include "singly_linked.h"
#include <iostream>
using namespace std;


singly_linked::singly_linked() {
	node *head;
	node *tail;
}

bool singly_linked::add(int val) {
	node *x = this->head;
	if (x == nullptr) {
		x = new node(val);
		this->tail = x;
		return true;
	}
	else {
		while (x->next != nullptr) {
			x = x->next;
		}
		x->next = new node(val);
		this->tail = x->next;
		return true;
	}
}

node singly_linked::removeTail() {
	node *x = this->head;
	while (&x->next != &this->tail) {
		x = x->next;
	}
	this->tail = x;
	node *temp = x->next;
	x->next = nullptr;
	return *temp;
}

node singly_linked::removeHead() {
	node *x = this->head;
	this->head = this->head->next;
	return *x;
}

singly_linked::~singly_linked() {
	node *head = nullptr;
	node *tail = nullptr;
}

int main() {
	singly_linked linkedList;
	cout << linkedList.add(5) << endl;

	return 0;
}