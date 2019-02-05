//
//  FileController.hpp
//  DataStructuresProject
//
//  Created by Billings, Spencer on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

#include "../Resources/Data/CrimeData.hpp"
#include "../Resources/Data/Music.hpp"

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> musicDataToVector(string filename);
};

#endif /* FileController_hpp */
