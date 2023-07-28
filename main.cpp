//
//  main.cpp
//  MyFirstCalc
//
//  Created by Ossie Bodero on 7/22/23.
//

#include <iostream>
#include "InputOps.cpp"
#include "Calculations.cpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    inputPull inputWork;
    calc calculation;
    
    inputWork.setNumbs();
    
    int operation = inputWork.getMathOps();
    
    switch(operation)
    {
        case 1:
            cout << calculation.add(inputWork.getNumbA(), inputWork.getNumbB()) << endl;
            //cout << operation << endl;
            break;
        case 2:
            cout << calculation.sub(inputWork.getNumbA(), inputWork.getNumbB()) << endl;
            //cout << operation << endl;
            break;
        case 3:
            cout << calculation.mul(inputWork.getNumbA(), inputWork.getNumbB()) << endl;
            //cout << operation << endl;
            break;
        case 4:
            cout << calculation.div(inputWork.getNumbA(), inputWork.getNumbB()) << endl;
            //cout << operation << endl;
            break;
            
    }
        
}
