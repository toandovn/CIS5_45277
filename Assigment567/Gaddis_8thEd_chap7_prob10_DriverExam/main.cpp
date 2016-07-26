/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 25, 2016, 7:14 PM
 */

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
    char a[20],b[20];
    int count;
    a[0]='A';
    a[1]='D';
    a[2]='B';
    a[3]='B';
    a[4]='C';
    a[5]='B';
    a[6]='A';
    a[7]='B';
    a[8]='C';
    a[9]='D';
    a[10]='A';
    a[11]='C';
    a[12]='D';
    a[13]='B';
    a[14]='D';
    a[15]='C';
    a[16]='C';
    a[17]='A';
    a[18]='D';
    a[19]='B';
  
    for(int i=0;i<20;i++)
    {
        
        cout<<"Answer number "<<i+1<<" : ";
        cin>>b[i];
        
        
    
    }
    for(int i=0;i<20;i++)
        if (a[i]==b[i])
            count++;
    if(count>=15)
        cout<<"You PASSED!!! You have  "<<count<<" correct answer(s)"<<endl;
    else
        cout<<"You do not pass! You only have "<<count<<" correct answer(s)"<<endl;
    return 0;
}

