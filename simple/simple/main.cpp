//
//  main.cpp
//  simple
//
//  Created by David Zhong on 2016-01-15.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <iostream>

using namespace std;

void print()
{
    cout << "print me" << endl;
}

int main()
{
    // Overwrite
    
    int t = 12;
    
    cout << t << endl;
    
    t = 30;
    
    cout << t << endl;
    
    // Basic arithmetic
    int x = 30 % 7;
    cout << x << endl;
    
    // if statement

    // Functions
    print();
    
    return 0;
}
