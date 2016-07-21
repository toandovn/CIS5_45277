/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on June 24, 2016, 9:28 PM
 */
//include directories
#include <cstdlib>
#include<iostream>
using namespace std;
//declare constant
const float tank_volumm=20;
const float town_MPG=23.5;
const float highway_MPG=28.9;
/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    float distance_town=tank_volumm*town_MPG;
    float distance_highway=tank_volumm*highway_MPG;
    cout<<"Distance the car can travel in town is: "<<distance_town<<" miles"<<endl;
    cout<<"Distance the car can travel on highway is: "<<distance_highway<<" miles"<<endl;
    return 0;
}

