//
//  BinaryTreeTester.hpp
//  DataStructuresProject
//
//  Created by Billings, Spencer on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include <iostream>
#include "/Users/sbil1824/Documents/C++ Projects/DataStructuresProject/DataStructuresProject/Model/Nodes/BinaryTreeNode.hpp"
#include "/Users/sbil1824/Documents/C++ Projects/DataStructuresProject/DataStructuresProject/Model/Structures/BinarySearchTree.hpp"

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
    
public:
    void doTreeStuff();
};

#endif /* BinaryTreeTester_hpp */
