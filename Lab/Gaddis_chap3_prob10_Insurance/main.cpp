/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 9:08 PM
 */

#include <cstdlib>
#include<iostream>

using namespace std;// namespace name
// declare constant
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables
    float replacement;
    float insurance;

   
    // input data
    cout<<"Enter the replacement cost: "<<endl;
    cin>>replacement;
    //process data
    insurance=0.8*replacement;
    //output the processed data
    cout<<"The minimum amount of insurance you should buy is: "<<insurance<<endl;
   
   
    
    
    return 0;
}