/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 25, 2016, 7:53 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    unsigned int account[18],accountNum;
    int count=0;
    account[0]=5658845;
    account[1]=4520125;
    account[2]=7895122;
    account[3]=8777541;
    account[4]=8451277;
    account[5]=1302850;
    account[6]=8080152;
    account[7]=4562555;
    account[8]=5552012;
    account[9]=5050552;
    account[10]=7825877;
    account[11]=1250255;
    account[12]=1005231;
    account[13]=6545231;
    account[14]=3852085;
    account[15]=7576651;
    account[16]=7881200;
    account[17]=4581002;
    
    cout<<"Enter your account number : ";
    cin>>accountNum;
    for(int i=0;i<18;i++)
    {
        if(accountNum==account[i])
            count++;
    }
    if(count==1)
        cout<<"Valid Account"<<endl;
    else
        cout<<"Invalid account"<<endl;
    return 0;
}

