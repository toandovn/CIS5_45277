/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 11, 2016, 4:06 PM
 */
//include directories
#include <cstdlib>
#include<iostream>

using namespace std;//namespace name
//declare constant
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables
    int floor,room,occupied;
    double sumOfRoom,sumOfOccupied=0;
    double percentage;
    
    //input data
    cout<<"How many floor the hotel has?"<<endl;
    cin>>floor;
    if(floor>1)
    {
        
    
    for(int i=1;i<=floor;i++)
    {
        do{
            
        
            if(i==13)
            i=i+1;
        cout<<"How many rooms in floor "<<i<<endl;
        cin>>room;
        if (room<10)
            cout<<"Each floor must have at least 10 rooms,so please input again"<<endl;
        }while(room<10);
        
        sumOfRoom=sumOfRoom+room;
        cout<<"How many room occupied "<<i<<endl;
        cin>>occupied;
        
       
        sumOfOccupied=sumOfOccupied+occupied;
    }
       
    
    
    
    percentage=sumOfOccupied*100/sumOfRoom;
    //output data
    cout<<"The hotel has "<<floor<<" floors with "<<sumOfRoom<<" rooms"<<endl;
    cout<<"Room occupied : "<<sumOfOccupied<<" rooms"<<endl;
    cout<<"Room unoccupied: "<<sumOfRoom-sumOfOccupied<<" rooms"<<endl;
    cout<<"Percentage of occupied room: "<<percentage<<"%"<<endl;
    }

    else
    {
        cout<<" The number of floor must bigger than 1"<<endl;
    }
    
    
    
    return 0;
}

