/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 11, 2016, 3:42 PM
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
    float sum=2500,n;
    //input data
    cout<<"Increment of fee in the next 6 years"<<endl;
    
   
    
    //output the processed data
    cout<<"Year"<<"\t\t"<<"Fee Charge"<<endl;
    for(int i=1;i<=6;i++)
    {
        sum=sum+sum*0.04;
        cout<<i<<"\t\t"<<sum<<endl;
    }
    return 0;
}
