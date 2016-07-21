/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 8:18 PM
 */

#include <cstdlib>
#include<iostream>
#include<iomanip>

using namespace std;// namespace name
// declare constant
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables
    float July;
    float August;
    float September;
    float average;
   
    // input data
    cout<<"Enter the amount of rain in July: "<<endl;
    cin>>July;
    cout<<"Enter the amount of rain in August: "<<endl;
    cin>>August;
    cout<<"Enter the amount of rain in September: "<<endl;
    cin>>September;
    
    average=(July+August+September)/3;
    //output the processed data
    cout<<"The average rainfall for July, August, and September is "<<average<<" inches"<<endl;
    
    
    return 0;
}

