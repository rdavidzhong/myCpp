//
//  main.cpp
//  simple
//
//  Created by David Zhong on 2016-01-15.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void print()
{
    cout << "print me" << endl;
}

class cool
{
public:
    void print()
    {
        cout << "good job" << endl;
    }
};


// Class
// Constructor

class test
{
public:
    test()
    {
        cout << "Constructor" << endl;
    }
    test(string z)
    {
        setName(z);
        //cout << "Constructor" << endl;
    }
    void setName(string x)
    {
        name = x;
    }
    
    string getName()
    {
        return name;
    }
private:
    string name;
};


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
    
    // Functions Multiple parameters
    // Classes and objects**
    cool myclass;
    myclass.print();
    
    cout << "=======" << endl;
    
    // Variables in classes
    //
    test print; // Constructor - Print automatically
    
    print.setName("testing");
    cout << print.getName() << endl;
    
    cout << "===Constructor====" << endl;
    
    // 14 - Constructor
    test printConstructor("printConstructor\n");
    cout << printConstructor.getName() << endl;
    
    return 0;
}
