#include <iostream>
#include "Node.h"

int main(int argc, char** argv) {
	Node newNode;
	newNode.setData("hello world");

	std::cout << "newNode.data = " << newNode.getData() << std::endl;
	std::cin.get();
}

