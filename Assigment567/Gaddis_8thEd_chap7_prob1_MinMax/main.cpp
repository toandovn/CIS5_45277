/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 25, 2016, 5:46 PM
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

/*
 * 
 */
int main(int argc, char** argv) {
    float a[10],min,max=0;
    //input data
    for(int i=0;i<10;i++)
    {
        cout<<"Input element "<<i+1<<endl;
        cin>>a[i];
    }
    for(int i=0;i<10;i++)
    {
        if(a[i]>max)
                max=a[i];
    }
    //output data
    cout<<"The biggest value of the array is "<<max<<endl;
    min=a[0];
    for(int i=1;i<10;i++)
    {
        if(a[i]<min)
            min=a[i];
        
    }
    //output data
    cout<<"The smallest value of the array is "<<min<<endl;
        
    
    return 0;
}

