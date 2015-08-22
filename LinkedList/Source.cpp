#include <iostream>
#include "LinkedList.h"

int main(int argc, char** argv) {
	LinkedList list;
	list.addData("Hello");
	list.addData("World");

	Node* helloNode = list.findData("Hello");
	Node* worldNode = list.findData("World");
	Node* notFound = list.findData("not found");

	std::cout << "helloNode.data = " << helloNode->getData() << std::endl;
	std::cout << "worldNode.data = " << worldNode->getData() << std::endl;
	std::cout << "notFound pointer = " << notFound << std::endl;

	std::cin.get();
}

