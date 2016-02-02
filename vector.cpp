//
//  main.cpp
//  vector
//
//  Created by David Zhong on 2016-02-01.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<string> v= {"luck", "look","kool", "ubc","sfu", "your"};
    cout << v.size() << endl;
    
    v.push_back ("lol"); // add an element at the end
    cout << v.size() << endl;
    
    v.pop_back();
    cout << v.size() << endl;
    
    v.erase(v.begin()+1); // erase the first element
    cout << v.size() << endl;
    
    v.insert(v.begin()+1, "a");
    cout << v.size() << endl;
    
    
    vector<string>::iterator i; // **<string> fix the problem
   // it = v.begin();
    for(i=v.begin(); i<v.end(); i++)
    {
        cout << ' ' << *i;
    }
    cout << endl;
    
    
}
