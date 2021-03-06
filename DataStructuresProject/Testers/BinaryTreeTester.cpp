//
//  BinaryTreeTester.cpp
//  DataStructuresProject
//
//  Created by Billings, Spencer on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "BinaryTreeTester.hpp"
#include "/Users/sbil1824/Documents/C++ Projects/DataStructuresProject/DataStructuresProject/Model/Nodes/BinaryTreeNode.hpp"

void BinaryTreeTester :: doTreeStuff()
{
    testIntTree.insert(55);
    testIntTree.insert(41);
    testIntTree.insert(2);
    testIntTree.insert(86);
    testIntTree.insert(101);
    testIntTree.insert(60);
    testIntTree.insert(50);
    testIntTree.insert(14);
    testIntTree.preOrderTraversal();
    testIntTree.getHeight();
    
    testStrTree.insert("grapefruit");
    testStrTree.insert("pineapple");
    testStrTree.insert("mango");
    testStrTree.insert("cherry");
    testStrTree.insert("lemon");
    testStrTree.insert("apple");
    testStrTree.insert("orange");
    testStrTree.insert("banana");
    testStrTree.preOrderTraversal();
    testStrTree.getHeight();
}
