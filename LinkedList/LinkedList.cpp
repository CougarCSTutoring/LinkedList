#include "LinkedList.h"

LinkedList::LinkedList()
{
	head = NULL;
	tail = NULL;
	size = 0;
}

LinkedList::~LinkedList()
{
	Node* currentNode = head;
	Node* deleteNode;
	while (currentNode) {
		deleteNode = currentNode;
		currentNode = currentNode->getNext();
		delete deleteNode;
	}
}

Node * LinkedList::findData(std::string data)
{
	Node* current = head;
	while (current) {
		if (current->getData() == data)
			return current;
		else
			current = current->getNext();
	}
	return NULL;
}

void LinkedList::addData(std::string data)
{
	if (tail) {
		Node* newNode = new Node(data);
		tail->setNext(newNode);
	} else {
		head = new Node(data);
		tail = head;
	}
	size++;
}

int LinkedList::getSize()
{
	return size;
}
