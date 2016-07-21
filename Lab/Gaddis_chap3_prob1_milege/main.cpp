/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 7:45 PM
 */
//include directories
#include <cstdlib>
#include<iostream>

using namespace std;// namespace name
// declare constant
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables
    float gas_tank;
    float miles;
    float mileage;
   
    // input data
    cout<<"Enter the number of gallon of gasoline your car can hold"<<endl;
    cin>>gas_tank;
    cout<<"Enter what distance your car can drive with a full tank of gasoline"<<endl;
    cin>>miles;
    mileage=miles/gas_tank;
    //output the processed data
    cout<<"Your car's mileage is: "<<mileage<<endl;
    
    
    return 0;
}

