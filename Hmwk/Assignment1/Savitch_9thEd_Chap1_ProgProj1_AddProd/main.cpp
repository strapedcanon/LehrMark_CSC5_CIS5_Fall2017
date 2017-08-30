/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on August 30, 2017, 10:05 AM
 * Purpose:  First Homework Problem
 *           Adding and Multiplying
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short op1;  //Operand 1 -32768 to 32767 = (-2^15,2^15-1)
    short op2;  //Operand 2 -32768 to 32767 = (-2^15,2^15-1)
    int   add;  //Add the result of adding op1 and op2 -> +-2 billion  (-2^31,2^31-1)
    int  prod;  //Prod the result of multiplying op1 and op2 -> +-2 billion  (-2^31,2^31-1)
    
    //Initialize Variables
    op1=10000;  //Example of literal initialization
    
    //Input Data/Variables
    cout<<"This program adds and multiplies 2 variables"<<endl;
    cout<<"The first variables is initialized to 10000"<<endl;
    cout<<"Input the second value with a range of -32768 to 32767 = (-2^15,2^15-1)"<<endl;
    cin>>op2;
    
    //Process or map the inputs to the outputs
    add = op1 + op2;
    prod= op1 * op2;
    
    //Display/Output all pertinent variables
    cout<<op1<<" + "<<op2<<" = "<<add<<endl;
    cout<<op1<<" * "<<op2<<" = "<<prod<<endl;
    
    //Exit the program
    return 0;
}