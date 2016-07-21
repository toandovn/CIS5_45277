/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 10:49 PM
 */

#include <cstdlib>
#include<iostream>
using namespace std;
//declare constant
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables
    int minutes;
    int hour;
    int day;
    int second;
    //input data
    cout<<"Enter the number of second "<<endl;
    cin>>second;
    
    //process data
    minutes=second/60;
    hour=second/3600;
    day=second/86400;
    //output the processed data
    if(second>=60)
        cout<<"There is(are) "<<minutes<<" minutes in "<<second<<" seconds"<<endl;
    if(second>=3600)
        cout<<"There is(are) "<<hour<<" hours in "<<second<<" seconds"<<endl;
    if(second>=86400)
        cout<<"There is(are) "<<day<<" days in "<<second<<" seconds"<<endl;
    
    return 0;
}



