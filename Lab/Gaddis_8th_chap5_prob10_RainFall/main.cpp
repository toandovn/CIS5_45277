/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 11, 2016, 5:01 PM
 */

//include directories
#include <cstdlib>
#include<iostream>

using namespace std;//namesspace name
//declare constant
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables
    int year,month;
    double sumOfRain=0,sumOfMonth=0,average;
    double rain;
    
    
    //input data
    cout<<"Input the number of year"<<endl;
    cin>>year;
    if(year>1)
    {
   for(int i=1;i<=year;i++)
    {
        for(int m=1;m<=12;m++)
        {
            do
        {
            cout<<"The rainfall rate of month "<<m<<" year "<<i<<": "<<endl;
            cin>>rain;
            if(rain<0)
            {
            cout<<"The rainfall rate can not be less than 0, please input again"<<endl;
            }
        }while(rain<0);
        sumOfRain+=rain;
        sumOfMonth+=1;
    
        }
   }
    average=sumOfRain/sumOfMonth;
    //output data
    
    cout<<"Total number of month: "<<sumOfMonth<<endl;
    cout<<"Total rainfall: "<<sumOfRain<<" inches"<<endl;
    cout<<"Average rainfall per month is: "<<average<<endl;
    }
    else
    {
        cout<<"The number of year must be bigger than 1"<<endl;
    }
   
    return 0;
}


