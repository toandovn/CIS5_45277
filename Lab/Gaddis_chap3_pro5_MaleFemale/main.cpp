/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 5, 2016, 8:25 PM
 */

#include <cstdlib>
#include<iostream>

using namespace std;// namespace name
// declare constant
/*
 * 
 */
int main(int argc, char** argv) {
//declare variables
    int male;
    float male_percent;
    int female;
    float female_percent;
   
    // input data
    cout<<"Enter the number of male registered in the class"<<endl;
    cin>>male;
    cout<<"Enter the number of female registered in the class"<<endl;
    cin>>female;
    //processing data
    male_percent=male*100/(male+female);
    female_percent=100-male_percent;
    
    //output the processed data
    cout<<"Male proportion is : "<<male_percent<<"%"<<endl;
    cout<<"Female proportion is: "<<female_percent<<"%"<<endl;
    
    
    return 0;
}

