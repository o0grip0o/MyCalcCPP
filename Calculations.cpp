//
//  Calculations.cpp
//  MyFirstCalc
//
//  Created by Ossie Bodero on 7/22/23.
//

#include "Calculations.hpp"
#include <iostream>

using namespace std;

class calc
{
public:
    // function definition
    int add(int a, int b);
    int sub(int a, int b);
    int mul(int a, int b);
    int div(int a, int b);
    
};

int calc::add(int a, int b)
{
    return a + b;
}

int calc::sub(int a, int b)
{
    return a - b;
}

int calc::mul(int a, int b)
{
    return a * b;
}

int calc::div(int a, int b)
{
    return b != 0 ? a / b : -1;
}
