/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 10:13 PM
 */
//include directories
#include <cstdlib>
#include<iostream>
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
    //input data
    cout<<"Enter the day"<<endl;
    cin>>day;
    cout<<"Enter the month"<<endl;
    cin>>month;
    cout<<"Enter the year"<<endl;
    cin>>year;
    //process data
    //output the processed data
    if(day*month==year)
        cout<<"It is a magic date"<<endl;
    else
    cout<<"It is not a magic date"<<endl;
    return 0;
}

