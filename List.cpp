#include "List.h"
#include <string>

using namespace std;

// Constructor por defecto
template<typename T>
List<T>::List(){
    head = NULL;
}



// Insertar al final
template<typename T>
void List<T>::insert(T data){
    Node<T> *newNode = new Node<T> (data);
    Node<T> *temp = head;
    if (!head) {
        head = newNode;
    } else {
        while (temp->getNext() != NULL) {
            temp = temp->getNext();
        }
        temp->setNext(newNode);
    }
}

template<typename T>
bool List<T>::isEmpty(){
	return head == NULL;
}

// Eliminar por data del nodo
template<typename T>
void List<T>::remove(T data_){
    Node<T> *temp = head;
    Node<T> *temp1 = head->getNext();
    if (head->getData() == data_) {
        head = temp->getNext();
	}else{
        while (temp1 != NULL && temp1->getData() != data_) {
        	temp = temp->getNext();
        	temp1 = temp1->getNext();
        }
        temp->setNext(temp1->getNext());
    }
}

// Imprimir la Lista
template<typename T>
string List<T>::show(){
    Node<T> *temp = head;
    string list = "";
    if (!head) {
        return "La Lista esta vacia \n";
    } else {
        while (temp) {
            list = list + temp->toString(temp->getData()) + "->";
            if (!temp->getNext());
                temp = temp->getNext();
        }
  }
  return list + "NULL";
}

// Buscar el dato de un nodo
template<typename T>
bool List<T>::exist(T data_){
    Node<T> *temp = head;
    bool flag = 0;
    while (temp) {
        if (temp->getData() == data_) {
            flag = 1;
        }
        temp = temp->getNext();
    }
    return flag;
}

template<typename T>
List<T>::~List() {}
