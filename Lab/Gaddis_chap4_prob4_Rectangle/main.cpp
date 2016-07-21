/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 10:19 PM
 */

#include <cstdlib>
#include<iostream>
using namespace std;
//declare constant
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables
    float width1,length1;
    float width2,length2;
    float area1,area2;
    //input data
    cout<<"Enter the width of rectangle 1: "<<endl;
    cin>>width1;
    cout<<"Enter the length of rectangle 1: "<<endl;
    cin>>length1;
    cout<<"Enter width of rectangle 2: "<<endl;
    cin>>width2;
    cout<<"Enter the length of rectangle 2: "<<endl;
    cin>>length2;
    //process data
    area1=width1*length1;
    area2=width2*length2;
    //output the processed data
    if(area1==area2)
        cout<<"Two rectangle have the same area"<<endl;
    if(area1<area2)
        cout<<"Rectangle 1 has smaller area than Rectangle 2"<<endl;
    if(area1>area2)
        cout<<"Rectangle 1 has greater area than Rectangle 2"<<endl;
  
    return 0;
}


