/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 25, 2016, 1:08 AM
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
int getNumAccidents();
void findLowest(int a,int b,int c,int d,int e);
/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variable
    int north,south,west,east, central;
    //input data
    cout<<"Input the total accidents reported in north area"<<endl;
    north=getNumAccidents();
     cout<<"Input the total accidents reported in south area"<<endl;
    south=getNumAccidents();
     cout<<"Input the total accidents reported in east area"<<endl;
    east=getNumAccidents();
     cout<<"Input the total accidents of west in area "<<endl;
    west=getNumAccidents();
    cout<<"Input the total accidents reported in central area"<<endl;
    central=getNumAccidents();
    findLowest(north,south,east,west,central);
    
    return 0;
}
int getNumAccidents()
{
    double num;
    do
    {
    cin>>num;
    if (num<=0)
        cout<<"It must be positive. Please input again"<<endl;
    }while(num<=0);
    return num;
}
void findLowest(int a, int b,int c, int d, int e)
{   
    double min=a;
    if (b<min)
    {
        min=b;
    }
    if(c<min)
    {
        min=c;
    }
    if(d<min)
    {
        min=d;
    }
    if(e<min)
    {
        min=e;
    }
 
    if(a==min)
    {
        cout<<"North part is the safest area in the city with "<<min<<" cases of accidents"<<endl;
    }
   if(b==min)
    {
        cout<<"South part is the safest area in the city with "<<min<<" cases of accidents"<<endl;
    }
    if(c==min)
    {
        cout<<"East part is the safest area in the city with "<<min<<" cases of accidents"<<endl;
    }
     if(d==min)
    {
        cout<<"West part is the safest area in the city with "<<min<<" cases of accidents"<<endl;
    }
    if(e==min)
    {
        cout<<"Central part is the safest area in the city with "<<min<<" cases of accidents"<<endl;
    }

    
}

