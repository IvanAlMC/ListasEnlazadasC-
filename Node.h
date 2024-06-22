#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

template <class T>

class Node
{
	private:
		Node *next;
        T data;
    public:
        Node(T);
        ~Node();
        Node<T>* getNext();
        void setNext(Node<T>*);
        T getData();
        string toString(T);
};

#endif // NODE_H
