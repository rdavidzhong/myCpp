//
//  main.cpp
//  recursion
//
//  Created by David Zhong on 2016-01-18.
//  Copyright © 2016 David Zhong. All rights reserved.
//



#include <iostream>
using namespace std;

int factorialFinder(int x)
{
    if(x == 1) // base case
    {
        return 1;
    }
    else
    {
        return x*factorialFinder(x-1);
    }
}

int main(int argc, const char * argv[]) {
    
    cout << factorialFinder(3) << endl;
    
    return 0;
}
