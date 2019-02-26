//
//  LinkedListTester.cpp
//  DataStructuresProject
//
//  Created by Billings, Spencer on 2/25/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "LinkedListTester.hpp"

void LinkedListTester :: testListBasics()
{
    LinkedList<int> numbers;
    numbers.add(9);
    cout << numbers.getFront()->getData() << " Is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd() -> getData() << " Is at the end of the list and should be 9" << endl;
    
    numbers.add(0);
    cout << numbers.getFront()->getData() << " Is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd()->getData() << " Is at the end of the list and should be 0" << endl;
    
    numbers.addAtIndex(1,2);
    numbers.add(324);
    
    cout << numbers.getFront()->getData() << " Is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd()->getData() << " Is at the end of the list and should be 324" << endl;
    
    cout << "This loop should print 4 lines" << endl;
    for (int index = 0; index < numbers.getSize(); index++)
    {
        cout << numbers.getFromIndex(index) << endl;
    }
    
    numbers.remove(0);
    numbers.add(32567);
    numbers.addAtIndex(0, 2312);
    
    cout << numbers.getFront()->getData() << " Is at the front of the list and should be 2312" << endl;
    cout << numbers.getEnd()->getData() << << " Is at the end of the llist and should be 32567" << endl;
    
}
