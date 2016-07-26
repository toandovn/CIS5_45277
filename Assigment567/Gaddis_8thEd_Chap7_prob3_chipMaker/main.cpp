/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 25, 2016, 6:12 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random
#include <iomanip>   //Formatting
#include <ctime>     //Time
#include<string>//String
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variable
    
    string salsa[5]={"mild","medium","sweet","hot","zesty"};
    int sale[5],sum,min,max=0;
    int productMax,productMin;
    
    //Input data
    for(int i=0;i<=4;i++)
    {
        do
        {
            cout<<"Enter the sale of "<<salsa[i]<<" ";
            cin>>sale[i];
            cout<<endl;
            
        }while(sale[i]<=0);
    }
    //find the total sale
    for(int i=0;i<=4;i++)
        sum=sum+sale[i];
    //find the biggest sale
    for(int i=0;i<=4;i++)
        if(sale[i]>max)
            max=sale[i];
    //find the product with biggest sale
    for(int i=0;i<=4;i++)
        if(sale[i]==max)
            productMax=i;
    min=sale[0];
    //find the smallest sale
    for(int i=0;i<=4;i++)
        if(sale[i]<min)
            min=sale[i];
    //find the product with smallest sale
    for(int i=0;i<=4;i++)
        if(sale[i]==min)
            productMin=i;
    
    //output the processed data
    for(int i=0;i<=4;i++)
    {
        cout<<"Total sale for "<<salsa[i]<<" is "<<sale[i]<<endl;
    }
    
    cout<<"Total sale is "<<sum<<endl;
    cout<<"Biggest sale belongs to "<<salsa[productMax]<<" with "<<max<<" products sold"<<endl;
    cout<<"Smallest sale belongs to "<<salsa[productMin]<<" with "<<min<<" products sold"<<endl;
    return 0;
}

