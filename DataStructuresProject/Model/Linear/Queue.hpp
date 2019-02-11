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
    Queue();
    ~Queue();
    
    // Queue methods
    void enqueue(type data);
    Type dequeue();
    Type peek();
    void clear();
    
public:
    <#member functions#>
};

#endif /* Queue_hpp */
