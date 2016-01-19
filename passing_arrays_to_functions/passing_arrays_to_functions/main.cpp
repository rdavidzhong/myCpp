//
//  main.cpp
//  passing_arrays_to_functions
//
//  Created by David Zhong on 2016-01-18.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <iostream>
using namespace std;

void printArray (int theArray[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        cout << theArray[i] << endl;
    }
}

int main(int argc, const char * argv[]) {
  
    int testArray[3] = {10, 23, 37};
    
    printArray(testArray, 3);
}
