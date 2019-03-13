//
//  LinearTester.cpp
//  DataStructuresProject
//
//  Created by Billings, Spencer on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("../Resources/Data/crime.csv");
    crimeTimerSTL.stopTimer();
    
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("../Resources/Data/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    musicSTL.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/sbil1824/Documents/C++ Projects/DataStructuresProject/DataStructuresProject/Resources/Data/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/sbil1824/Documents/C++ Projects/DataStructuresProject/DataStructuresProject/Resources/Data/music.csv");
    musicOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    musicSTL.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
}

void LinearTester :: testVsStack()
{
    Stack<CrimeData> crymeStack;
    vector<CrimeData> cryme = FileController :: readCrimeDataToVector("../Resources/Data/crime.csv");
    LinkedList<CrimeData> moreCrymes = FileController :: readDataToList("../Resources/Data/crime.csv");
    for(int i = 0; i < 11; i++)
    {
        crymeStack.push(moreCrymes.getFromIndex(i));
    }
}

void LinearTester :: testVsQueue()
{
    Queue<Music> musikQueue;
    vector<Music> musik = FileController :: musicDataToVector("../Resources/Data/music.csv");
    LinkedList<Music> moreMusik = FileController :: musicDataToList("../Resources/Data/music.csv");
    for(int i = 0; i < 11; i++)
    {
        musikQueue.enqueue(moreMusik.getFromIndex(i));
    }
}

void LinearTester :: testVsDouble()
{
    LinkedList<CrimeData> crymeList = FileController :: readDataToList("../Resources/Data/crime.csv");
    CircularList<CrimeData> crymeCircle;
}
