//
//  ProjectController.cpp
//  SecondProject
//
//  Created by White, Nicholas on 1/31/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include "ProjectController.hpp"
#include "../Model/Timer.hpp"
#include <iostream>

using namespace std;

int ProjectController :: changeNumber()
{
    return 42;
}

void ProjectController :: changeWithPointer(int * numberPointedTo)
{
    cout << "Type in a number please " << endl;
    int derpy;
    cin >> derpy;
    
    *numberPointedTo += 9000;
}

void ProjectController :: start()
{
    Timer sillyTime;
    sillyTime.startTimer();
    
    cout << "Students said to say hello world" << endl;
    int myNumber = 23445;
    
    int * numberPointer = &myNumber;
    
    cout << myNumber << endl;
    
    tryNumbers(mynumber);
    cout << "Here is my number again " << myNumber << endl;
    myNumber = changeNumber();
    cout << "Changed? " <<myNumber << endl;
    
    changedWithPointer(numberPoointer);
    cout << "Changed?? " << myNumber << endl;
    
    sillyTime.stopTimer();
    sillTime.displayTimerInfo();
    
    sillyTime.resetTimer();
    cout << sillyTime.getExecutionTimeInMicroseconds() << endl;

}

//void Project


