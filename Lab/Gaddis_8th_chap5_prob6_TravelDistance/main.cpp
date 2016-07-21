/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 11, 2016, 3:47 PM
 */

//include directories
#include <cstdlib>
#include <iostream>


using namespace std;//name of namespace
//declare constant
/*
 * 
 */
//main program
int main(int argc, char** argv) {
   //declare variables
    int hour;
    float speed;
    //input data
    cout<<"what is the speed of your vehicle"<<endl;
    cin>>speed;
    cout<<"How many hours it traveled?"<<endl;
    cin>>hour;
   
    //output the processed data
    cout<<"Hour"<<"\t\t"<<"Distance"<<endl;
    cout<<"-------------------------"<<endl;
    for(int i=1;i<=hour;i++)
        cout<<i<<"\t\t"<<i*speed<<endl;
    
    return 0;
}

