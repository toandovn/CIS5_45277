/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 11, 2016, 3:28 PM
 */

#//include directories
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
    cout<<"Numbers of millimeters ocean will rise in the next 25 years"<<endl;
   
    
    //output the processed data
    cout<<"Year"<<"\t\t"<<" Rising amount"<<endl;
    for(int i=1;i<=25;i++)
    {
        cout<<i<<"\t\t"<<1.5*i<<endl;
    }
   
   
}

