/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 11:02 PM
 */

#include <cstdlib>
#include<iostream>
#include<string>
using namespace std;
//declare constant
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables
    string color1;
    string color2;
    
    
    //input data
    cout<<"Enter the color 1: "<<endl;
    getline(cin,color1);
    cout<<"Enter the color 2: "<<endl;
    getline(cin,color2);
    if(color1=="red"&& color2=="yellow")
    {
        cout<<" The combined color is orange"<<endl;
    }
    else
    {
        if(color1=="red"&&color2=="blue")
        {
            cout<<"The combine color is purple"<<endl;
        }
        else
        {
            
        
    if(color1=="yellow" && color2=="blue")
    {
        cout<<"The combined color is green"<<endl;
        }
        
    else
        cout<<"Your color is not primary one";
                
        }
    }
    return 0;
}




