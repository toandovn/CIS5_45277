/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 11, 2016, 2:55 PM
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
    int sum=0,n;
    //input data
    cout<<"Input the number you want to calculate the sum"<<endl;
    cin>>n;
    if(n>0)
    {
    for(int i=1;i<=n;i++)
        sum+=i;
    
    //output the processed data
    cout<<"The sum for 1 to "<<n<<" is "<<sum;
    }
    else
        cout<<"The number can not be negative";
    
    return 0;
}

