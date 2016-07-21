/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 8:39 PM
 */

#include <cstdlib>
#include<iostream>

using namespace std;// namespace name
// declare constant
const float widget_weigh=12.5;
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables
    int widget;
    float pallet_weigh;
    float total_weight;
   
    // input data
    cout<<"Enter how much the pallet weigh: "<<endl;
    cin>>pallet_weigh;
    cout<<"Enter the total weight"<<endl;
    cin>>total_weight;
    //process data
    widget=(total_weight-pallet_weigh)/12.5;
    //output the processed data
    cout<<"The number widget on pallet is: "<<widget<<endl;
    
    
    return 0;
}

