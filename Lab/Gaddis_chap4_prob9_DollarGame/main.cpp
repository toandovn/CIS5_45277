/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 11:19 PM
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
    int quarter;
    int nickels;
    int dime;
    int penny;
    int total;
    //input data
    cout<<"Enter the number of quarter"<<endl;
    cin>>quarter;
    cout<<"Enter the number of dime"<<endl;
    cin>>dime;
    cout<<"Enter the number of nickel"<<endl;
    cin>>nickels;
    cout<<"Enter the number of penny"<<endl;
    cin>>penny;
    //process data
    total=25*quarter+10*dime+5*nickels+penny;
    //output the processed data
    if(total==100)
        cout<<"Congratulation! You got 1"<<endl;
    if(total<100)
        cout<<"You need more to get 1 dollar"<<endl;
    if(total>100)
        cout<<"You have more than 1 dollar"<<endl;
        
    
    return 0;
}

