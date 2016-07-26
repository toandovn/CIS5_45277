/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 25, 2016, 9:58 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random
#include <iomanip>   //Formatting
#include <ctime>     //Time
#include<string>//string
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void findMax(float a[]);
/*
 * 
 */

int main(int argc, char** argv) {
    string month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    float rainFall[12];
    for(int i=0;i<12;i++)
    {
        do
        {
            cout<<"Enter the amount of rainfall of "<<month[i]<<" : ";
            cin>>rainFall[0];
            if(rainFall<=0)
                cout<<"Rainfall must be posotive.Please input again"<<endl;
        }while (rainFall<0);
    }
    
    return 0;
}

int findMax(float a[12])
{
    float max=0;
    int temp;
for(int i=0;i<12;i++)
{
    if(a[i]>max)
        max=a[i];
    temp=i;
}
    return temp;
    
}
