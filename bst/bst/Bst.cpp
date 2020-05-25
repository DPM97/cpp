#include "Bst.h"
#include <iostream>
using namespace std;



Bst::Bst()
{
	root = NULL;
}

Bst::~Bst()
{
}

Node Bst::insert(Node *node) {
	Node *x = root;
	Node *y = node;
	if (node != NULL) {
		while (x != NULL) {
			if (y->val < x->val) {
				x = x->left;
			}
			else {
				x = x->right;
			}
		}
		y = x;
		return *y;
	}
	else {
		cout << "Can't add a null node!";
		return *node;
	}
}

Node Bst::search(int val) {
	Node *x = root;
	Node *y = NULL;
	while (x != NULL) {
		if (val < x->val) {
			x = x->left;
		}
		else if (val > x->val) {
			x = x->right;
		}
		else {
			return *x;
		}
	}
	return *y;
}

Node Bst::findMax() {
	Node *x = root;
	while (x->right != NULL) {
		x = x->right;
	}
	return *x;
}

Node Bst::findMin() {
	Node *x = root;
	while (x->left != NULL) {
		x = x->left;
	}
	return *x;
}

int Bst::fetchNumElements(Node *node) {
	int elements = 0;
	if (node == NULL) {
		return 0;
	} 
	else 
	{
		if (node->left != NULL) {
			elements = 1 + fetchNumElements(node->left);
		}
		else if (node->right != NULL) {
			elements = 1 + fetchNumElements(node->right);
		}
	}
	return elements;
}