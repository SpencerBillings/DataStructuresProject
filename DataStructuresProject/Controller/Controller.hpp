//
//  Controller.hpp
//  DataStructuresProject
//
//  Created by Billings, Spencer on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"
#include "../Model/Nodes/LinearNode.hpp"
#include "FileController.hpp"
#include "../Testers/LinearTester.hpp"
#include "../Testers/GraphTester.hpp"
#include "/Users/sbil1824/Documents/C++ Projects/DataStructuresProject/DataStructuresProject/Testers/BinaryTreeTester.hpp"

using namespace std;

class Controller
{
private:
    void usingNodes();
    void testFiles();
    void testLinear();
    void testGraph();
    void testTree();
public:
    void start();
};

#endif /* Controller_hpp */
