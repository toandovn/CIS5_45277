/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 25, 2016, 5:10 PM
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
float FallingDistance(int time);
/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variable
    int time;
    float distance;
    //input data
    do{
        
    
    cout<<"Input the object's falling time: ";
    cin>>time;
    if(time<=0)
        cout<<"Time must be positive. Please input again"<<endl;
    }while(time<=0);
    //output processed data
    cout<<"Distance of object travel in "<<time<< "s"<<" is ";
    distance=FallingDistance(time);//call the function
    cout<<distance;
    
    for(int i=1;i<=10;i++)
    {
        cout<<endl;
        distance=FallingDistance(i);
        cout<<i<<"s :"<<distance;
    }
    return 0;
}
float FallingDistance(int time)
{
    float distance;
    distance=(9.8*time*time)/2;
    return distance;
    
}
