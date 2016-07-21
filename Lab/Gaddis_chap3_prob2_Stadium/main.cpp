/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 7:53 PM
 */

#include <cstdlib>
#include<iostream>
#include<cstdio>

using namespace std;// namespace name
// declare constant
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables
    int SeatA;
    int SeatB;
    int SeatC;
    int revenue;
   
    // input data
    cout<<"Enter the number of seat A ticket sold"<<endl;
    cin>>SeatA;
    cout<<"Enter the number of seat B tickets sold"<<endl;
    cin>>SeatB;
    cout<<"Enter the number of seat C ticket sold"<<endl;
    cin>>SeatC;
    revenue=SeatA*15+SeatB*13+SeatC*12;

    //output the processed data
    cout<<"Total income is:$ "<<revenue<<".00"<<endl;
    
    
    return 0;
}