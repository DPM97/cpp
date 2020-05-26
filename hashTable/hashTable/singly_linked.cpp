#include "singly_linked.h"
#include <iostream>
#include <string>
using namespace std;


singly_linked::singly_linked() {
	node *head;
	node *tail;
}

bool singly_linked::add(pair<int, string> value) {
	node *x = this.head;
	if (x->next == nullptr) {
		x = new node(value);
		this->head = this->tail = x;
		return true;
	}
	else {
		while (x->next != nullptr) {
			x = x->next;
		}
		x->next = new node(value);
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

node singly_linked::getElementByIndex(int index) {
	node *x = this->head;
	for (int i = 0; i < index; i++) {
		x = x->next;
	}
	return *x;
}

node singly_linked::getElementByValue(pair<int, string> val) {
	node *x = this->head;
	while (x != nullptr) {
		if (x->val.first == val.first) {
			return *x;
		}
	}
	return *x;
}

singly_linked::~singly_linked() {
	node *head = nullptr;
	node *tail = nullptr;
}

/*
int main() {
	singly_linked linkedList;
	linkedList.add(5);
	linkedList.add(10);
	linkedList.add(3);
	cout << linkedList.printList() << endl;
	return 0;
}
*/
