/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 25, 2016, 5:32 PM
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
float celcius(float Fahrenheit);
/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variable
    float celciusDegree,Fahrenheit;
    
    //input data
   
        
    
    cout<<"Input the Fahrenheit degree you want to convert: ";
    cin>>Fahrenheit;
   
    //output processed data
    
    celciusDegree=celcius(Fahrenheit);//call the function
   cout<<Fahrenheit<<" degree equal to "<<celciusDegree<<" degree"<<endl;
    
    for(int i=0;i<=20;i++)
    {
        cout<<endl;
        cout<<i<<" Fahrenheit"<<" = "<<celcius(i)<<" degree";
       
    }
    return 0;
}
float celcius(float Fahrenheit)
{
    float celcius;
    celcius=5*(Fahrenheit-32)/9;
    return celcius;
    
}
