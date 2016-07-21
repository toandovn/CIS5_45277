/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 11, 2016, 3:36 PM
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
    //input data
    float sum=1;
    cout<<"Calories burnt after minutes"<<endl;
   
   
    
    //output the processed data
    cout<<"Minutes"<<"\t\t"<<"Calories burnt"<<endl;
    for(int i=5;i<=30;i=i+5)
    {
        sum=i*3.6;
        cout<<i<<"\t\t"<<sum<<endl;
    }
   
    return 0;
}
