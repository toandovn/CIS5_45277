/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on June 24, 2016, 8:07 PM
 */
//include directories
#include <cstdlib>
#include<iostream>
using namespace std;//namespace

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    float pay_amount=2200.0;//initial each payment amount
    float pay_periods=26;//initial how many times of payment
    float annualPay=pay_amount*pay_periods;// total pay annually
    cout<<" The annual pay is: "<<annualPay<<"$"<<endl;
    return 0;
}

