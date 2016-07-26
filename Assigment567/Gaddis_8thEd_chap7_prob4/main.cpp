/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 25, 2016, 6:43 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random
#include <iomanip>   //Formatting
#include <ctime>     //Time
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    int size,n;
    //input data
    do
    {
        
    
    cout<<"Input the size of array ";
    cin>>size;
    }while(size<=0);
    int a[size];
    for(int i=1;i<=size;i++)
    {
        cout<<"Enter the element "<<i<<" : ";
        cin>>a[i];
        cout<<endl;
    }
    cout<<"Enter the number n "<<endl;
    cin>>n;
    //output data
    cout<<"Numbers that larger than "<<n<<" in the array is: "<<endl;
    for(int i=1;i<=size;i++)
        if (a[i]>n)
            cout<<a[i]<<' ';
    return 0;
}

