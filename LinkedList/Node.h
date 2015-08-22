#ifndef NODE_H
#define NODE_H
#include <string>

class Node {
private:
	std::string data;
public:
	Node();
	~Node();
	std::string getData();
	void setData(std::string newData);
};

#endif

