/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 9:58 PM
 */
//include directories
#include <cstdlib>
#include<iostream>

using namespace std;//namespace name
//declare constant
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables
    float num1,num2;
    //input data
    cout<<"Enter the namber 1: "<<endl;
    cin>>num1;
    cout<<"Enter the number 2: "<<endl;
    cin>>num2;
    //process data
    if (num1<=num2)
    
        cout<<"Number "<<num1<<" less than Number "<<num2<<endl;    
    else
        cout<<"Number "<<num2<<" less than Number "<<num1<<endl;
        return 0;
}

