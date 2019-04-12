//
//  Tree.hpp
//  DataStructuresProject
//
//  Created by Billings, Spencer on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Tree_hpp
#define Tree_hpp

#include "/Users/sbil1824/Documents/C++ Projects/DataStructuresProject/DataStructuresProject/Model/Nodes/BinaryTreeNode.hpp"

template <class Type>
class Tree
{
protected:
    BinaryTreeNode<Type> * root;
    
public:
    //Informational Methods
    virtual int getSize() = 0;
    virtual int getHeight() = 0;
    virtual bool isComplete() = 0;
    virtual bool isBalanced() = 0;
    
    //Data Methods
    virtual void insert(Type data) = 0;
    virtual bool contains(Type data) = 0;
    virtual void remove(Type data) = 0;
    
    //Traversals
    virtual void inOrderTraversal() = 0;
    virtual void preOrderTraversal() = 0;
    virtual void postOrderTraversal() = 0;
};

#endif /* Tree_h */
