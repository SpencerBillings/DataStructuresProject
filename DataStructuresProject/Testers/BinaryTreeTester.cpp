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
    testTree.insert(55);
    testTree.insert(41);
    testTree.insert(2);
    testTree.insert(86);
    testTree.insert(101);
    testTree.insert(60);
    testTree.insert(38);
    testTree.insert(14);
    testTree.inOrderTraversal();
}
