/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 10:26 PM
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
    float weight;
    float height;
    float index;
    //input data
    cout<<"Enter the weight"<<endl;
    cin>>weight;
    cout<<"Enter the height"<<endl;
    cin>>height;
    
    //process data
    index=(weight*703)/(height*height);
    //output the processed data
    if(index<18.5)
        cout<<"You are underweight"<<endl;
    if(index>25)
        cout<<"You are overweight"<<endl;
    if(index>=18.5 && index<=25)
        cout<<"You are optimal"<<endl;
   
    return 0;
}


