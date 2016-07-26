/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 25, 2016, 12:33 AM
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
double getSales();
void findHighest(double a,double b,double c,double d);
/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variable
    double Northeast,Southeast, Northwest,Southwest;
    //input data
    cout<<"Input the total sale of Northeast division"<<endl;
    Northeast=getSales();
     cout<<"Input the total sale of Southeast division"<<endl;
    Southeast=getSales();
     cout<<"Input the total sale of Northwest division"<<endl;
    Northwest=getSales();
     cout<<"Input the total sale of Southwest division"<<endl;
    Southwest=getSales();
    findHighest(Northeast,Southeast,Northwest,Southwest);
    
    return 0;
}
double getSales()
{
    double sale;
    do
    {
    cin>>sale;
    if (sale<=0)
        cout<<"It can not be negative. Please input again"<<endl;
    }while(sale<=0);
    return sale;
}
void findHighest(double a, double b,double c, double d)
{   
    double max=0;
    if (a>=max)
    {
        max=a;
    }
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    if(d>max)
    {
        max=d;
    }
    if(a==max)
    {
        cout<<"The winning division is division Northeast with total sale $"<<max<<endl;
    }
    if(b==max)
    {
        cout<<"The winning division is division Southeast with total sale $"<<max<<endl;
    }
     if(c==max)
   
     {
         cout<<"The winning division is division Northwest with total sale $"<<max<<endl;
     }
     if(d==max)
   
     {
         cout<<"The winning division is division Southwest with total sale $"<<max<<endl;

    
}
}