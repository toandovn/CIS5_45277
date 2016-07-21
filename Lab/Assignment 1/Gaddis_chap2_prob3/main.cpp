/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on June 24, 2016, 7:03 PM
 */
//include directories
#include <cstdlib>
#include<iostream>
using namespace std;//namespace
//declare constanst
const float state_tax=0.04;
const float county_tax=0.02;
/*
 * 
 */
int main(int argc, char** argv) {
    //declare variable
    float sale=95;
    float sale_tax=sale+ sale*(state_tax+county_tax);
    cout<<" The price after tax is : "<<sale_tax<<endl;
    
    return 0;
}

