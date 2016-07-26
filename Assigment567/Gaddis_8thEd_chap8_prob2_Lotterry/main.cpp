
 /*/

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 25, 2016, 8:10 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    
    unsigned int lottery[10],winningNum;
    int count=0;
    lottery[0]=13579;
    lottery[1]=26791;
    lottery[2]=26792;
    lottery[3]=33445;
    lottery[4]=55555;
    lottery[5]=62483;
    lottery[6]=77777;
    lottery[7]=79422;
    lottery[8]=85647;
    lottery[9]=93121;
    
    
    cout<<"Enter winning number : ";
    cin>>winningNum;
    for(int i=0;i<10;i++)
    {
        if(winningNum==lottery[i])
            count++;
    }
    if(count==1)
        cout<<"Congratulation!!You wins the lottery"<<endl;
    else
        cout<<"You do not win this week"<<endl;
    return 0;
}
