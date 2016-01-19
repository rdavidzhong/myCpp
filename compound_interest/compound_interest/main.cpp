//
//  main.cpp
//  compound_interest
//
//  Created by David Zhong on 2016-01-17.
//  Copyright © 2016 David Zhong. All rights reserved.
//


/*
 Compound interest
 
 F = P \left(1 + \frac{i}{n}\right)^{nt}

 where
 F = future value
 P = present value
 i = nominal interest rate
 n = compounding frequency
 t = time
 
 
 double pow (double base, double exponent);
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    
    float a;
    float p = 65000;
    float r = 0.1;
    
    for (int year = 1; year <= 20; year++)
    {
        a = p * pow(1+r, year);
        cout << year << "-----" << a << endl;
    }

}
