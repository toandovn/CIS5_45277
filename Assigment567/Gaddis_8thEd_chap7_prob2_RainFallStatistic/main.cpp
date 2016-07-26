/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 25, 2016, 5:55 PM
 */

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
    double a[12],min,max=0;
    double sum=0;
    int monthMax,monthMin;
    //input data
    for(int i=1;i<=12;i++)
    {
        do
        {
        cout<<"Input rainfall month "<<i<<endl;
        cin>>a[i];
        }while (a[i]<0);
    }
    for(int i=1;i<=10;i++)
        sum=sum+a[i];
    for(int i=1;i<=12;i++)
    {
        if(a[i]>max)
                max=a[i];
    }
    //output data
    for(int i=1;i<=12;i++)
    {
        if(a[i]==max)
            monthMax=i;
    }
    min=a[1];
    for(int i=1;i<10;i++)
    {
        if(a[i]<min)
            min=a[i];
        
    }
     for(int i=1;i<=12;i++)
    {
        if(a[i]==min)
            monthMin=i;
    }
    //output data
    cout<<"Month "<<monthMax<<" has the highest amount of rain with "<<max<<endl;
    cout<<"Month "<<monthMin<<" has the smallest amount of rain with "<<min<<endl;
    cout<<"Total rainfall for this year is "<<sum<<endl;
    cout<<"Average rainfall for this year is "<<sum/12<<endl;   
    
    return 0;
}

