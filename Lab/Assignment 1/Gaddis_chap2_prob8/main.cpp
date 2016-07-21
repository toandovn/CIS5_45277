/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on June 24, 2016, 8:19 PM
 */
//include directories
#include <cstdlib>
#include<iostream>
using namespace std;//namespace
//declare the constant
const float tax=0.07;
/*
 * 
 */
int main(int argc, char** argv) {
    //declare the variable
    float item1=15.95,item2=24.95,item3=6.95,item4=12.95,item5=3.95;//initial items
    float sub_total=item1+item2+item3+item4+item5;//calculate the sub total
    float sale_tax=sub_total*tax;//calculate the sale tax
    float total= sub_total+sale_tax;//calculate the total
    //output the price
    cout<<" The price of item 1 is: "<<item1<<endl;
    cout<<" The price of item 2 is: "<<item2<<endl;
    cout<<" The price of item 3 is: "<<item3<<endl;
    cout<<" The price of item 4 is: "<<item4<<endl;
    cout<<" The price of item 5 is: "<<item5<<endl;
    cout<<" The sub total  is: "<<sub_total<<endl;
    cout<<" The sale tax is: "<<sale_tax<<endl;
    cout<<" The total is: "<<total<<endl;
    
    
    return 0;
}

