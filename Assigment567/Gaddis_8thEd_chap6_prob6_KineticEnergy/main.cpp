/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 25, 2016, 5:24 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random
#include <iomanip>   //Formatting
#include <ctime>     //Time
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float kineticEnergy(float mass,float velocity);
/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variable
    float mass,velocity;
    float Energy;
    //input data
    do{
        
    
    cout<<"Input the object's mass: ";
    cin>>mass;
    
    cout<<"Input the object's velocity: ";
    cin>>velocity;
    if(mass<=0|| velocity<=0)
        cout<<"They  must be positive. Please input again"<<endl;
    }while(mass<=0 ||velocity<=0);
    //output processed data
    cout<<"Kinetic energy of object is : ";
    Energy=kineticEnergy(mass,velocity);//call the function
    cout<<Energy;
    
   
    return 0;
}
float kineticEnergy(float mass,float velocity)
{
    float Energy;
    Energy=(mass*velocity*velocity)/2;
    return Energy;
    
}
