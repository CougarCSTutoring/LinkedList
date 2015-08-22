#include <iostream>
#include "Node.h"

int main(int argc, char** argv) {
	Node* worldNode = new Node("World");
	Node* helloNode = new Node("Hello", worldNode);
	std::cout << "helloNode.data = " << helloNode->getData() << std::endl;
	std::cout << "worldNode.data = " << helloNode->getNext()->getData() << std::endl;

	std::cin.get();
}

