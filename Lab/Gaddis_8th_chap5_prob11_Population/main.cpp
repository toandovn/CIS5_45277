/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 11, 2016, 5:46 PM
 */

//include directories
#include <cstdlib>
#include<iostream>

using namespace std;//namespace name
//declare constant
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables
    double startNumber,increase,day;
    double population;
    
    //input data
    do{
        
    
    cout<<"What is the starting number of organism?"<<endl;
    cin>>startNumber;
    if(startNumber<2)
        cout<<"The starting number of organism must be greater than 2, please input again"<<endl;
    }while(startNumber<2);
    population=startNumber;
    do{
        
    
    cout<<"What is the daily population increase?"<<endl;
    cin>>increase;
    if(increase<0)
        cout<<"The daily population increase must be greater than 0, please input again"<<endl;
    }while(increase<0);
    do{
        
    
    cout<<"How many days you want to calculate?"<<endl;
    cin>>day;
    if(day<1)
        cout<<"The number of days must be greater than 0, please input again"<<endl;
    }while(day<1);
    
    
    
    
    
    //output data
    cout<<"Number of organism after "<<day<<" days with "<<increase<<" % incresing daily"<<endl;
    cout<<"Day"<<"\t\t"<<"Population"<<endl;
     cout<<"1"<<"\t\t"<<population<<endl;
    for(int i=2;i<=day;i++)
    {
        population=population+population*increase/100;
    
        cout<<i<<"\t\t"<<population<<endl;
    }
    return 0;
}

