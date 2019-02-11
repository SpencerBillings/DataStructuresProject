//
//  Queue.hpp
//  DataStructuresProject
//
//  Created by Billings, Spencer on 2/11/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include "LinkedList.hpp"
#include <iostream>

using namespace std;

template <class Type>
class class Queue : public LinkedList<Type>
{
public:
    Queue();
    ~Queue();
    
    // Queue methods
    void enqueue(type data);
    Type dequeue();
    Type peek();
    void clear();
    
    // Overridden LinkedList methods
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    Type remove(int index);
};

template <class Type>
Queue <Type> :: Queue() : LinkedList<Type>()
{
    // Empty (handeled by the parent class constructor)
}

template <class Type>
Queue<Type> :: ~Queue()
{
    for (LinearNode<Type> * removed = this->front; removed != nullptr; removed = this->front)
    {
        this->front = removed->getNextNode();
        delete removed;
    }
}

template <class Type>
void Queue<Type> :: enqueue(Type item)
{
    LinearNode<Type> * added = new LinearNode<Type>(item);
    
    if (this->size == 0)
    {
        this->front = added;
    }
    else
    {
        this->end->setNextNode(added);
    }
    
    this->end = added;
    this->size++;
}

template <class Type>
void Queue<Type> :: addAtFunction(int index, Type item)
{
    assert(index == this->size);
    enqueue(item);
}

template <class Type>
void Queue<Type> :: add(Type item)
void Queue<Type> :: add(Type item)
{
    enqueue(item);
}

template <class Type>
Type Queue<Type> :: dequeue()
{
    <#statements#>
}

#endif /* Queue_hpp */
