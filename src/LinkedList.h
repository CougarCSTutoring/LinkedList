#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList
{
private:
	Node* head;
	Node* tail;
	int size;

public:
	LinkedList();
	~LinkedList();

	Node* findData(std::string data);
	void addData(std::string data);
	int getSize();
};

#endif

