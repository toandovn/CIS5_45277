/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on June 24, 2016, 8:01 PM
 */
//include directories
#include <cstdlib>
#include<iostream>
using namespace std;//namespace

/*
 * 
 */
int main(int argc, char** argv) {
//declare variable
    int a=28,b=32,c=24,d=37,e=33;
    int sum;//sum
    int average;//avarage
    sum=a+b+c+d+e;
    average=sum/5;
    cout<<"The avarage is: "<<average<<endl;//output the average
    return 0;
}

