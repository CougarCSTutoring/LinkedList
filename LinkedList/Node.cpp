#include "Node.h"

Node::Node()
{
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
