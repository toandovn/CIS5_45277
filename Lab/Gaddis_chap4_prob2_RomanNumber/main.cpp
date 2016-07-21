/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 10:05 PM
 */

#include <cstdlib>
#include<iostream>

using namespace std;//namespace name
//declare constant
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables
    int number;
    //input data
    cout<<"Enter the number you want to convert to Roman Number: "<<endl;
    cin>>number;
    //process data
    switch(number)
    {
        case 1:
            cout<<number<<" is I"<<endl;
            break;
       case 2:
            cout<<number<<" is II"<<endl;
            break; 
        case 3:
            cout<<number<<" is III"<<endl;
            break;
        case 4:
            cout<<number<<" is IV"<<endl;
            break;
        case 5:
            cout<<number<<" is V"<<endl;
            break;
        case 6:
            cout<<number<<" is VI"<<endl;
            break;    
        case 7:
            cout<<number<<" is VII"<<endl;
            break;    
        case 8:
            cout<<number<<" is VIII"<<endl;
            break; 
        case 9:
            cout<<number<<" is IX"<<endl;
            break;   
        case 10:
            cout<<number<<" is X"<<endl;
            break;
        default:
            break;
    }
    
    return 0;

}