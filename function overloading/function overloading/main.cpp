//
//  main.cpp
//  function overloading
//
//  Created by David Zhong on 2016-01-18.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <iostream>
using namespace std;

void printNum(int x)
{
    cout << x << endl;
}

void printNum(float x)
{
    cout << x << endl;
}

int main(int argc, const char * argv[]) {
    
    int a = 10;
    float b = 23.44;
    
    printNum(a);
    printNum(b);
    
    return 0;
}
