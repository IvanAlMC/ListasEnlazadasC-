#include "Node.h"



// Constructor por parámetro
template<typename T>
Node<T>::Node(T data_)
{
    data = data_;
    next = NULL;
}

template<typename T>
T Node<T>::getData()
{
	return this->data;
}

template<typename T>
Node<T>* Node<T>::getNext(){
	return this->next;
}

template<typename T>
void Node<T>::setNext(Node<T> *next_){
	this->next = next_;
}

template<typename T>
string Node<T>::toString(T data){
	ostringstream ss;
	ss << data;
	return ss.str();
}


template<typename T>
Node<T>::~Node() {}
