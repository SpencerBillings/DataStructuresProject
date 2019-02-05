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
#include "FileController.hpp"

using namespace std;

class Controller
{
private:
    void usingNodes();
    void testFiles();
public:
    void start();
};

#endif /* Controller_hpp */
