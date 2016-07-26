/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 25, 2016, 6:54 PM
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
    int a[3][5];
    int sum=0;
    int total1=0,total2=0,total3=0;
    //input data
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=5;j++)
        {
            do
            {
            cout<<"Enter the food for monkey "<<i<<" in day "<<j<<" : ";
            cin>>a[i][j];
            sum=sum+a[i][j];
            }while (a[i][j]<0);
        
            
        }
    }
    total1=a[1][1]+a[1][2]+a[1][3]+a[1][4]+a[1][5];
    total2=a[2][1]+a[2][2]+a[2][3]+a[2][4]+a[2][5];
    total3=a[3][1]+a[3][2]+a[3][3]+a[3][4]+a[3][5];
    cout<<"Average amount of food eaten per day by whole family of monkey is "<<sum/15<<" pounds"<<endl;
    if(total1>total2&&total1>total3)
        cout<<"Monkey 1  consumed the greatest of food with "<<total1<<" pounds"<<endl;
    if(total1<total2&&total1<total3)
        cout<<"Monkey 1  consumed the smallest of food with "<<total1<<" pounds"<<endl;
    if(total2>total1&&total2>total3)
        cout<<"Monkey 2  consumed the greatest of food with "<<total2<<" pounds"<<endl;
    if(total2<total1&&total2<total3)
        cout<<"Monkey 2  consumed the smallest of food with "<<total2<<" pounds"<<endl;
    if(total3>total2&&total3>total1)
        cout<<"Monkey 3  consumed the greatest of food with "<<total3<<" pounds"<<endl;
    if(total3<total1&&total3<total2)
        cout<<"Monkey 3  consumed the smallest of food with "<<total3<<" pounds"<<endl;
    
    return 0;
}

