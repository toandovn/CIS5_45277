/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 26, 2016, 9:35 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void selectionSort(int []);
 int binarySearch( int [], int value);
/*
 * 
 */
int main(int argc, char** argv) {
     int account[18],accountNum;
    
     int result;
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
    selectionSort(account);//using selection sort
    
    do
    {
        cout<<" Enter your bank account: ";
        cin>>accountNum;
        if(accountNum<=0)
            cout<<"It must be possitive. Please input again"<<endl;
    }while (accountNum<=0);
    result=binarySearch(account,accountNum);//serch by binary
    //output processed data
    if(result==-1)
        cout<<" Your account is invalid"<<endl;
    else
        cout<<"Your account is valid "<<endl;
    return 0;
}

 int binarySearch( int account[18], int value)
{
    
    int first=0;
    unsigned int last=17,middle,position=-1;
    bool found=false;
    while(!found && first<=last)
    {
        middle=(first+last)/2;
        if (account[middle]==value)
        {
            found=true;
            position=middle;
        }
        else if(account[middle]>value)
            last=middle-1;
        else 
            first=middle+1;
    }
    return position;
}
void selectionSort(int a[18])
{
    int temp=0;
    for(int i=0;i<17;i++)
        for(int j=i+1;j<18;j++)
    {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    }
}