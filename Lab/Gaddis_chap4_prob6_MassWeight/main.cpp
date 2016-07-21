/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 10:36 PM
 */

#include <cstdlib>
#include<iostream>
using namespace std;
//declare constant
const float g=9.8;
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables
    float mass;
    float weight;
    
    //input data
    cout<<"Enter the mass"<<endl;
    cin>>mass;
 
    //process data
    weight=mass*g;
    //output the processed data
    cout<<"The weight is "<<weight<<endl;
    if(weight>1000)
        cout<<"It is too heavy"<<endl;
    if(weight<10)
    cout<<"It is too light"<<endl;
    return 0;
}



