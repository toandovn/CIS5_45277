/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on June 24, 2016, 6:55 PM
 */
//include directories//
#include <cstdlib>
#include<iostream>

using namespace std;//namespace
const float rate=0.56;//declare constanst

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variable;
    float sale_total=8600000;
    float com=sale_total*rate;
    cout<<"Commission is: "<<com<<endl;//output result
    return 0;
}

