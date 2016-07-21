/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 9:03 PM
 */

#include <cstdlib>
#include<iostream>

using namespace std;// namespace name
const int serving=300;
// declare constant
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables
    int cookies;//number of cookie eaten
    float each_cookie;//energy of a cookie
    float calories;
  
   
    // input data
    cout<<"Enter the number of cookies you ate"<<endl;
    cin>>cookies;
    //process data
    each_cookie=3000/30;
    calories=each_cookie*cookies;
    //out put the processed data
    cout<<" Total calories consumed is :"<<calories<<endl;
    
    
    
    return 0;
}