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

Node Bst::insert(int val) {
	if (this->root == NULL) {
		this->root = new Node(NULL, val);
		cout << "Sucessfully created the root node, " << val << "." << endl;
		return *this->root;
	}
	else {
		Node *x = this->root;
		Node *parent = NULL;
		if (val != NULL) {
			while (x != NULL) {
				parent = x;
				if (val < x->val) {
					x = x->left;
				}
				else {
					x = x->right;
				}
			}
			x = new Node(parent, val);
			if (x->parent->val < x->val) {
				x->parent->right = x;
			}
			else {
				x->parent->left = x;
			}
			cout << "Successfully added " << val << " to the tree!" << endl;
			return *x;
		}
		else {
			cout << "Can't add a null node!" << endl;
			return *x;
		}
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
	if (y != NULL) {
		return *y;
	}
	else {
		return *new Node(NULL, -1);
	}
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
	else {
		elements = 1 + fetchNumElements(node->left) + fetchNumElements(node->right);
	}
	return elements;
}

int main() {
	Bst tree;
	tree.insert(3);
	tree.insert(10);
	tree.insert(1);
	tree.insert(20);
	cout << "Elements in tree: " << tree.fetchNumElements(tree.root) << endl;
	cout << "Largest element: " << tree.findMax().val << endl;
	cout << "Smallest element: " << tree.findMin().val << endl;
	cout << "Element found: " << tree.search(3).val << endl;
	cout << "Not found: " << tree.search(100).val << endl;
	cin.get();
	return 0;
}
