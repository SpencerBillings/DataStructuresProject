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
    DoubleNode<Type> * previousNode;
    
protected:
    DoubleNode<Type> * previous;
    DoubleNode<Type> * next;
    
public:
    DoubleNode();
    DoubleNode(Type data);
    DoubleNode(Type data, DoubleNode<Type> * previous, DoubleNode<Type> * next);
    
    DoubleNode<Type> * getNext();
    DoubleNode<Type> * getPrevious();
    
    void setNext(DoubleNode<Type> * next);
    void setPrevious(DoubleNode<Type> * previous);
};

template <class Type>
DoubleNode<Type> :: DoubleNode() : Node<Type>()
{
    previous = nullptr;
    next = nullptr;
}

template <class Type>
DoubleNode<Type> :: DoubleNode(Type data) : Node<Type>(data)
{
    previous = nullptr;
    next = nullptr;
}

template <class Type>
DoubleNode<Type> :: DoubleNode(Type data, DoubleNode<Type> *previous, DoubleNode<Type>* next) : Node<Type>(data)
{
    this->previous = previous;
    this->next = next;
}

template <class Type>
DoubleNode<Type> * DoubleNode<Type> :: getNext()
{
    return next;
}

template <class Type>
DoubleNode<Type> * DoubleNode<Type> :: getPrevious()
{
    return previous;
}

template <class Type>
void DoubleNode<Type> :: setNext(DoubleNode<Type>* next)
{
    this->next = next;
}

template <class Type>
void DoubleNode<Type> ::  setPrevious(DoubleNode<Type>* previous)
{
    this->previous = previous;
}

#endif /* DoubleNode_hpp */
