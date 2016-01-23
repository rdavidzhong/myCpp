//
//  main.cpp
//  polymorphism
//
//  Created by David Zhong on 2016-01-22.
//  Copyright © 2016 David Zhong. All rights reserved.
//

/*
 In oop, polymorphism refers to a programming language's 
 ability to process objects differently 
 
 depending on their data type or class. 
 
 More specifically, it is the ability to redefine methods for derived classes
 
 
 Same function(method) with many different outcomes
 */

#include <iostream>

using namespace std;

class Enemy
{
protected:
    int attackPower;
public:
    void setAttackPower(int a)
    {
        attackPower = a;
    }
    
};

class Ninja: public Enemy
{
public:
    // Polymorphism
    void attack()
    {
        cout << "ninja, attack!-" << attackPower << endl;
    }
};

class Monster: public Enemy
{
public:
    // Polymorphism
    void attack()
    {
        cout << "Monster eat you!-" << attackPower << endl;
    }
};

int main(int argc, const char * argv[]) {
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    
    enemy1->setAttackPower(20);
    enemy2->setAttackPower(30);
    
    n.attack();
    m.attack();
    
    return 0;
}
