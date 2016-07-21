/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on June 24, 2016, 7:48 PM
 */
//includes directories
#include <cstdlib>
#include<iostream>

using namespace std;//namespace
//declares constant
const float tax=0.0675;
const float tip=0.2;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    float meal_cost= 88.67;
    float tax_amount=meal_cost*tax;
    float tip_amount=(meal_cost+tax_amount)*tip;
    float total_bill= meal_cost+tax_amount+tip_amount;
    cout<<"Meal amount is: "<<meal_cost<<"$"<<endl;//output meal cost
    cout<<"Tax amount is: "<<tax_amount<<"$"<<endl;//output tax amount
   
    cout<<"Tip amount is: "<<tip_amount<<"$"<<endl;//output tip amount
    cout<<"Total bill is: "<<total_bill<<"$"<<endl;//output total bill
    return 0;
}

