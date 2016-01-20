//
//  main.cpp
//  pass_by_reference
//
//  Created by David Zhong on 2016-01-19.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

void passByValue(int x)
{
    x = 33;
    ///cout << x << endl;
}


void passByReference(int* x)
{
    *x = 66;
  //  cout << *x << endl;
}

int main(int argc, const char * argv[]) {

    int dog = 12;
  //  int cat = 25;
    
    passByValue(dog);
    //passByValue(cat);
    cout << "dog is " << dog << endl;
    
    passByReference(&dog);
    
    cout << "dog is " << dog << endl;
    
    return 0;
}
