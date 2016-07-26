/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 25, 2016, 12:20 AM
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
double getLength();
double getWidth();
double getArea();
void displayData();

/*
 * 
 */
int main(int argc, char** argv) {
    //input data
    //process data
    //output processed data
    displayData();
    return 0;

}
double getLength()
{
    double length;

    do
    {
        cout<<"input the length of rectangle: "<<endl;
        cin>>length;
        if(length<0)
            cout<<"Length can not be negative. Please input again"<<endl;
        
    }while(length<=0);
    return length;
}
double getWidth()
{
    double width;

    do
    {
        cout<<"input the width of rectangle: "<<endl;
        cin>>width;
        if(width<0)
            cout<<"Length can not be negative. Please input again"<<endl;
        
    }while(width<=0);
    return width;
}
double getArea()
{
    double Area;

    Area=getLength()*getWidth();
    return Area ;
}
void displayData()
{
    cout<<"Area of this rectangle is : "<<getArea();
}