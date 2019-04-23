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
    testIntTree.insert(38);
    testIntTree.insert(14);
    testIntTree.inOrderTraversal();
    testIntTree.getHeight();
    
    testStrTree.insert("apple");
    testStrTree.insert("banana");
    testStrTree.insert("cherry");
    testStrTree.insert("grapefruit");
    testStrTree.insert("lemon");
    testStrTree.insert("mango");
    testStrTree.insert("orange");
    testStrTree.insert("pineapple");
    testStrTree.inOrderTraversal();
    testStrTree.getHeight();
}
