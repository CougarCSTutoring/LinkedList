#ifndef NODE_H
#define NODE_H
#include <string>

class Node {
private:
	std::string data;
	Node* next;
public:
	Node();
	Node(std::string newData);
	Node(std::string newData, Node* newNext);
	~Node();
	std::string getData();
	void setData(std::string newData);
	Node* getNext();
	void setNext(Node* newNext);
};

#endif

