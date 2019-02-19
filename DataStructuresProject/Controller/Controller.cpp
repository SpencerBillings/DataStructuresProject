//
//  Controller.cpp
//  DataStructuresProject
//
//  Created by Billings, Spencer on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    cout << "Welcome, welcome to Papa's house." << endl;
    usingNodes();
    testFiles();
    testLinear();
}

void Controller :: usingNodes()
{
    Node<int> mine(5);
    Node<string> wordHolder("Words can be stored");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("[Insert Text]");
    cout << wordHolder.getData() << endl;
}

void Controller :: testFiles()
{
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("../Resources/Data/crime.csv");
    for (int index = 234; index < 256; index++)
    {
        cout << index << ": contents are: " << myData[index] << endl;
    }
}

void Controller :: testLinear()
{
    LinearTester lookieHere;
    lookieHere.testVsSTL();
}
