/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 8:32 PM
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
    float cup_sugar;
    float cup_butter;
    float cup_flour;
    int cookies;
   
    // input data
    cout<<"Enter the number of cookie you want to make"<<endl;
    cin>>cookies;
   
    
    //output the processed data
    cout<<" You need " <<1.5*cookies<<" cups of sugar"<<", "<<cookies<<" cups of butter"<<", and "<<2.75*cookies<<" cups of flour"<<endl;
    
    
    return 0;
}

