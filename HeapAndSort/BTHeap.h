//MAX_HEAP Implementation
//
//File: BTHeap.h
//
//Author: Eric Liang
//Website: http://www.eric-liang.com

#pragma once
#include "Node.h"
#include <vector>
class BTHeap
{public:
	Node * root;
	BTHeap(Node*);
	bool empty();
	void insert(Node* r, Node* n);
	void retrieve();
	void remove(Node * n);
	void inorder(Node *r);
	void HeapSort();
	bool search(Node *r, int key);
};