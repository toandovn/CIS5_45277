/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 11, 2016, 3:14 PM
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
    char display;
    //input data
    cout<<"Character with the ACSII code from 0 to 127 are: "<<endl;
   
    
    //output the processed data
    for(int i=1;i<=127;i++)
    {
        cout<<char(i)<<" ";
        if(i%16==0)
            cout<<endl;
    }
    return 0;
}
