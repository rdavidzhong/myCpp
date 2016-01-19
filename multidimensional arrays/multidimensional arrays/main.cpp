//
//  main.cpp
//  multidimensional arrays
//
//  Created by David Zhong on 2016-01-18.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
 
    // [row][col]
    int mArray [2][3] = {{1,2,3}, {6,7,8}};
    
    //        col col col
    //row[0]// 1,  2,  3
    //row[1]// 6,  7,  8
    
    cout << mArray[0][1] << endl;
    cout << "---------" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mArray[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
