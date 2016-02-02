//
//  main.cpp
//  test
//
//  Created by David Zhong on 2016-01-24.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
  
    int arr[3] = {1,2,3};
    
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == 3)
        {
            cout << i << endl;
        }
    }
}
