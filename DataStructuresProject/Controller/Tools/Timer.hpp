//
//  Timer.hpp
//  DataStructuresProject
//
//  Created by Billings, Spencer on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>
#include <assert.h>
#include <iostream>

#include "Timer.hpp"

using namespace std;

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();
};

#endif /* Timer_hpp */
