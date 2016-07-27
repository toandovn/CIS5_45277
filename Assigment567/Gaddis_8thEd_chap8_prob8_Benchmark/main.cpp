/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 26, 2016, 10:12 PM
 */

#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random
#include <iomanip>   //Formatting
#include <ctime>     //Time
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes


int binarySearch( int [], int value);
int linearSearch(int [],int value);

/*
 * 
 */
int main(int argc, char** argv) {
    int array[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int num,countLinear,countBinary;
    //input data
        cout<<"Enter the number: ";
        cin>>num;
        //call two function
    countLinear=linearSearch(array,num);
    countBinary=binarySearch(array,num);
    //output data
    cout<<"The number of comparison of linear search is "<<countLinear<<endl;
    cout<<"The number of comparison of binary search is "<<countBinary<<endl;
    
    
    return 0;
}
int binarySearch(int array[20],int value)
{
     int first=0;
    int last=9,middle,position=-1;
    bool found=false;
    int count=0;
    while(!found && first<=last)
    {
        count++;
        middle=(first+last)/2;
        if (array[middle]==value)
        {
            found=true;
            position=middle;
        }
        else if(array[middle]>value)
            last=middle-1;
        else 
            first=middle+1;
    }
    return count;
}
int linearSearch(int array[],int value)
{
    int count=0;
    for(int i=0;i<20;i++)
    {
        count++;
        if(array[i]==value)
        return count;    
    }
    
       
}


