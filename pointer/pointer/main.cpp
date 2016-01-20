//
//  main.cpp
//  pointer
//
//  Created by David Zhong on 2016-01-19.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int x = 5;
    int* y ;
    y = &x;
    
    cout << &x << endl;
    cout << y << endl;
    cout << *y << endl;
    
    return 0;
}
