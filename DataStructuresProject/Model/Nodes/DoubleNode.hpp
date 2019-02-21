//
//  BiDirectionalNode.hpp
//  DataStructuresProject
//
//  Created by Billings, Spencer on 2/21/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef DoubleNode_hpp
#define DoubleNode_hpp

#include "Node.hpp"

template <class Type>
class DoubleNode : public Node<Type>
{
private:
    DoubleNode<Type> * nextNode;
    DoubleNode<Type> * prevNode;
    
public:
    DoubleNode();
    DoubleNode(Type data);
    DoubleNode(Type data, DoubleNode<Type> * prevNode, DoubleNode<Type> * next);
    
    DoubleNode<Type> * getNext();
    DoubleNode<Type> * getPrev();
    
    void setNext(DoubleNode<Type> * next);
    void setPrev(DoubleNode<Type> * prev);
};

template <class Type>
DoubleNode<Type> :: DoubleNode() : Node<Type>()
{
    prev = nullptr;
    next = nullptr;
}

template <class Type>
DoubleNode<Type> :: DoubleNode(Type data) : Node<Type>(data)
{
    prev = nulltpr;
    next = nullptr;
}

template <class Type>
DoubleNode<Type> :: DoubleNode(Type data, DoubleNode<Type> *previous, DoubleNode<Type>* next) : Node<Type>(data)
{
    this->prev = prev;
    this->next = next;
}

template <class Type>
DoubleNode<Type> * DoubleNode<Type> :: getNext()
{
    return next;
}

template <class Type>
DoubleNode<Type> * DoubleNode<Type> :: getPrev()
{
    return prev;
}

template <class Type>
void DoubleNode<Type> :: setNext(DoubleNode<Type>* next)
{
    this->next = next;
}

template <class Type>
void DoubleNode<Type> ::  setPrev(DoubleNode<Type>* prev)
{
    this->prev = prev;
}

#endif /* DoubleNode_hpp */
