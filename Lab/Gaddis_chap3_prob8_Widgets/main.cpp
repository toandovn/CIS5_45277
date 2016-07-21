/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 8:55 PM
 */
//include directories
#include <cstdlib>
#include<iostream>

using namespace std;
//declare constant
const float widget_weight=12.5;
/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    int widget;
    float pallet_weight;
    float total_weight;
    //input data
    cout<<"Enter how much weight of pallet:"<<endl;;
    cin>>pallet_weight;
    cout<<"Enter the total mass:"<<endl;;
    cin>>total_weight;
    //process data
    widget=(total_weight-pallet_weight)/12.5;
    //output the processed data
    cout<<"The number of widget is: "<<widget<<endl;
    return 0;
}

