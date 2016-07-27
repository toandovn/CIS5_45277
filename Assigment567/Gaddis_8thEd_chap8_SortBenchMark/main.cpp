/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 26, 2016, 10:40 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include<cstdlib>//random seed
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
int selectionSort(int []);
int bubleSort(int []);

/*
 * 
 */
int main(int argc, char** argv) {
    int array[20];
    int countBuble,countSelection;
    
    srand (time(NULL));
    for(int i=0;i<20;i++)
        array[i]=rand()%100+1;
     for(int i=0;i<20;i++)
        cout<<array[i]<<" ";
    countBuble=bubleSort(array);
    countSelection=selectionSort(array);
    
    cout<<endl;
    cout<<"The number of comparision of selection sort is "<<countSelection<<endl;
     
    cout<<"The number of comparision of buble sort is "<<countBuble<<endl;
    
    return 0;
}
int selectionSort(int a[20])
{
    int minIndex,minValue,count=0;
    for(int i=0;i<19;i++)
    {
        minIndex=i;
        minValue=a[i];
        for( int j=i+1;j<20;j++)
        {
            count++;
            if(a[j]<minValue)
            {
                minValue=a[j];
                minIndex=j;
            }
        }
        a[minIndex]=a[i];
        a[i]=minValue;
    }
    return count;
}
int bubleSort(int a[20])
{
    bool swap;
    int temp=0,count=0;
    do
    {
        swap=false;
        for(int i=0;i<20;i++)
        {
            count++;
           if(a[i]>a[i+1]) 
           {
               temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
              
               swap=true;
           }
        }
    }while(swap);
    return count;
}


