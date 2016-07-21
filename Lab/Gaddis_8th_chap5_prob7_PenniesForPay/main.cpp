/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 11, 2016, 3:54 PM
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
    float sum=0,daily=0.01;
    int day;
    //input data
    cout<<"Input how many days you worked"<<endl;
    cin>>day;
    
    
    //output the processed data
    cout<<"Day"<<"\t\t"<<"Payment"<<endl;
    for(int i=1;i<=day;i++)
    {
        
        cout<<i<<"\t\t"<<daily<<endl;
        sum=sum+daily;
        daily=daily*2;
        
    }
    cout<<"The total payment after "<<day<<" days is "<<sum<<" dollars"<<endl;
    
    return 0;
}

