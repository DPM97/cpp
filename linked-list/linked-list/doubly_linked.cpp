#include "doubly_linked.h"
#include <iostream>
#include <string>
using namespace std;


doubly_linked::doubly_linked() {
	node *head;
	node *tail;
}

bool doubly_linked::add(int value) {
	if (this->head == nullptr) {
		this->head = this->tail = new node(value);
		return true;
	}
	else {
		this->tail->next = new node(value);
		this->tail->next->last = this->tail;
		this->tail = this->tail->next;
		return true;
	}
}

node doubly_linked::removeHead() {
	this->head = this->head->next;
	node *temp = this->head->last;
	this->head->last = nullptr;
	return *temp;
}

node doubly_linked::removeTail() {
	this->tail = this->tail->last;
	node*temp = this->tail->next;
	this->tail->next = nullptr;
	return *temp;
}

string doubly_linked::print() {
	string str = "";
	node *x = this->head;
	while (x != nullptr) {
		str.append(to_string(x->val));
		x = x->next;
		if (x != nullptr) {
			str.append(" --> ");
		}
	}
	return str;
}

node doubly_linked::removeIndex(int index) {
	if (index == 0) {
		return removeHead();
	}
	else {
		node *x = this->head;
		for (int i = 0; i < index; i++) {
			x = x->next;
		}
		if (x != this->tail) {
			x->last->next = x->next;
		}
		else {
			removeTail();
		}
		return *x;
	}
}

doubly_linked::~doubly_linked() {
	tail = nullptr;
	head = nullptr;
}


int main() {
	doubly_linked list;
	list.add(4);
	list.add(12);
	list.removeIndex(1);
	list.add(120);
	list.add(1230);
	cout << list.print() << endl;
	return 0;
}
