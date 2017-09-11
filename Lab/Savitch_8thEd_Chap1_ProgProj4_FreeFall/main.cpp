/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on September 11th, 2017, 10:30 AM
 * Purpose:  Free Fall Calculation
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const float GRAVITY=32.174f;//Gravity ft/sec^2 @ sea level
const float CNVFTMT=3.28f;  //Conversion from feet to meters

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float time;  //Input value in Seconds
    float distFt;//Output value in Feet
    float distMt;//Output value in Meters
    float gravMt;//Acceleration due to gravity in meters
    
    //Input Data/Variables
    cout<<"This program calculates the distance dropped in free fall"<<endl;
    cout<<"Input the time in seconds during free fall"<<endl;
    cin>>time;
    
    //Process or map the inputs to the outputs
    distFt=GRAVITY*time*time/2;
    distMt=distFt/CNVFTMT;
    gravMt=GRAVITY/CNVFTMT;
    
    //Display/Output all pertinent variables
    cout<<"Time in free fall = "<<time<<"(secs)"<<endl;
    cout<<"Distance fallen   = "<<distFt<<"(ft)"<<endl;
    cout<<"Distance fallen   = "<<distMt<<"(meters)"<<endl;
    cout<<"Gravity -> "<<GRAVITY<<"(ft/sec^2) = ";
    cout<<gravMt<<"meters/sec^2)"<<endl;
    
    //Exit the program
    return 0;
}