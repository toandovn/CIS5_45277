/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 11:25 PM
 */

#include <cstdlib>
#include<iostream>
#include<math.h>
using namespace std;
//declare constant
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables
    int day;
    int month;
    int year;
    int leap;
    //input data
    cout<<"Enter the the month from 1 to 12"<<endl;
    cin>>month;
    cout<<"Enter the year"<<endl;
    cin>>year;
    
    //process data
    if(month==1&& month==3&& month==5 && month==7 && month==8 && month==10 && month==12)
        day=31;
  
    if(month==4&& month==6&& month==9 && month==11)
        day=30;
    leap=year % 4;
    if(month==2 && leap==0)
        day=29;
    if(month==2 && leap!=0)
        day=28;
    //output the data
    cout<< "Month "<<month<<" in year "<<year<<" has "<<day<<" days"<<endl;
    return 0;
}



