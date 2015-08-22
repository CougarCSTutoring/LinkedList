#include "Node.h"

Node::Node()
{
	data = "";
	next = NULL;
}

Node::Node(std::string newData)
{
	data = newData;
	next = NULL;
}

Node::Node(std::string newData, Node * newNext)
{
	data = newData;
	next = newNext;
}


Node::~Node()
{
}

std::string Node::getData()
{
	return data;
}

void Node::setData(std::string newData)
{
	data = newData;
}

Node * Node::getNext()
{
	return next;
}

void Node::setNext(Node * newNode)
{
	next = newNode;
}
