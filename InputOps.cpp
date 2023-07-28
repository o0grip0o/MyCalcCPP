//
//  InputOps.cpp
//  MyFirstCalc
//
//  Created by Ossie Bodero on 7/22/23.
//

#include "InputOps.hpp"
#include <iostream>
#include <string>

using namespace std;

class inputPull
{
private:
    int numA;
    int numB;
    string mathOp;
public:
    void setNumbs()
    {
        cout << "Please enter numbers: " << endl;
        cin >> numA >> mathOp >> numB;
    }
    
    int getNumbA()
    {
        return numA;
    }
    int getMathOps()
    {
        if(mathOp.compare("+") == 0)
        {
            return 1;
        }
        else if(mathOp.compare("-") == 0)
        {
            return 2;
        }
        else if(mathOp.compare("*") == 0)
        {
            return 3;
        }
        else
        {
            return 4;
        }
    }
    int getNumbB()
    {
        return numB;
    }
};
