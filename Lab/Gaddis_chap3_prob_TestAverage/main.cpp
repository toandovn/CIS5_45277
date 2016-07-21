/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 8:04 PM
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
    float test1,test2,test3,test4,test5;
    float average;
   
    // input data
    cout<<"Enter the Test1 score"<<endl;
    cin>>test1;
    cout<<"Enter the test 2 score"<<endl;
    cin>>test2;
    cout<<"Enter the test 3 score"<<endl;
    cin>>test3;
    cout<<"Enter the test 4 score"<<endl;
    cin>>test4;
    cout<<"Enter the test 5 score"<<endl;
    cin>>test5;
    average=(test1+test2+test3+test4+test5)/5;
    cout<<"The average score is :"<<average;
    
   // cout<<setprecision(2)<<average<<endl;
    //output the processed data
    
    
    
    return 0;
}

