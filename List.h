#ifndef LIST_H
#define LIST_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <string>

#include "Node.h"
#include "Node.cpp"

using namespace std;

template <class T>

class List
{
    public:
        List();
        ~List();

        void insert(T);
        void remove(T);
        string show();
        bool exist(T);
        bool isEmpty();

    private:
        Node<T> *head;
};

#endif // LIST_H
