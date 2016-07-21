/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 15, 2016, 7:42 PM
 */
//System Libraries
#include <cstdlib>//Seting random number seed
#include<iostream>//Input/output library
#include<cmath>//Math Library
#include<string>//string library

using namespace std;//Namespace of the System Libraries
//User Libraries

//Global Constants
//Function Prototypes
void menu();
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void wordProcessing(int i);
float min(float a,float b,float c);
long factorial(int i);
/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    //Input Data
    do{
        menu();
        cin>>choice;
        
        //Process the Data and Display results
        switch(choice){
            case '1':prob1();break;
            case '2':prob2();break;
            case '3':prob3();break;
            case '4':prob4();break;
            case '5':prob5();break;
            case '6':prob6();break;
            default:cout<<"Not option in menu"<<endl;
        }
    }while(choice>='1'&&choice<='6');
    
    return 0;
}
 void menu(){
    cout<<endl;
    cout<<"Menu Program for Midterm  Test"<<endl;
    cout<<"Simple choose the number for the problem to display"<<endl;
    cout<<"Type 1 for Problem 1 for displaying X of number"<<endl;
    cout<<"Type 2 for Problem 2 for displaying * symbol for a character"<<endl;
    cout<<"Type 3 for Problem 3 for writing a check"<<endl;
    cout<<"Type 4 for Problem picking ISP "<<endl;
    cout<<"Type 5 for calculating gross pay"<<endl;
    cout<<"Type 6 for Problem 6 calculating a sequence"<<endl;  
    cout<<endl;
}
 void prob1()
 {
     int number,temp;
    cout<<"Enter the number: "<<endl;
    cin>>number;
    if(number%2==1)
    {
    temp=number;
    
    for(temp=number;temp>=1;temp--)
    {
    for(int i=number;i>=1;i--)
    {
        if(i==temp ||i==number-temp+1)
            cout<<i;
        else cout<<" ";
    }
    cout<<endl;
    }
    }
    if(number%2==0)
    {
        
        for(temp=1;temp<=number;temp++)
        {
            for(int i=1;i<=number;i++)
            {
                if(i==temp||i==number-temp+1)
                    cout<<i;
                else cout<<" ";
            }
            cout<<endl;
        }
      
    }
  

 }
 void prob2()
 {
    string display;
    char a,b,c,d;
    cout<<"Enter the number"<<endl;
    cin>>display;
    a=display.at(0);
    b=display.at(1);
    c=display.at(2);
    d=display.at(3);
    cout<<d<<" ";
    switch(d){
        case '1':
            cout<<"*";
            break;
        case '2':
            cout<<"**";
            break;
        case '3':
            cout<<"***";
            break;
        case '4':
            cout<<"****";
            break;
        case '5':
            cout<<"*****";
            break;
        case '6':
            cout<<"******";
            break;
        case '7':
            cout<<"*******";
            break;
        case '8':
            cout<<"********";
            break;
        case '9':
            cout<<"*********";
            break;
        default:
            cout<<": ?";
            
            
    }
    cout<<endl;
    cout<<c<<" ";
    switch(c){
        case '1':
            cout<<"*";
            break;
        case '2':
            cout<<"**";
            break;
        case '3':
            cout<<"***";
            break;
        case '4':
            cout<<"****";
            break;
        case '5':
            cout<<"*****";
            break;
        case '6':
            cout<<"******";
            break;
        case '7':
            cout<<"*******";
            break;
        case '8':
            cout<<"********";
            break;
        case '9':
            cout<<"*********";
            break;
        default:
            cout<<": ?";
            
            
    }
    cout<<endl;
    cout<<b<<" ";
    switch(b){
        case '1':
            cout<<"*";
            break;
        case '2':
            cout<<"**";
            break;
        case '3':
            cout<<"***";
            break;
        case '4':
            cout<<"****";
            break;
        case '5':
            cout<<"*****";
            break;
        case '6':
            cout<<"******";
            break;
        case '7':
            cout<<"*******";
            break;
        case '8':
            cout<<"********";
            break;
        case '9':
            cout<<"*********";
            break;
        default:
            cout<<": ?";
            
            
    }
    cout<<endl;
    cout<<a<<" ";
    switch(a){
        case '1':
            cout<<"*";
            break;
        case '2':
            cout<<"**";
            break;
        case '3':
            cout<<"***";
            break;
        case '4':
            cout<<"****";
            break;
        case '5':
            cout<<"*****";
            break;
        case '6':
            cout<<"******";
            break;
        case '7':
            cout<<"*******";
            break;
        case '8':
            cout<<"********";
            break;
        case '9':
            cout<<"*********";
            break;
        default:
            cout<<": ?";
            
            
    }
            
   
 }
 void prob3()
 {
     
    string Dt,Payee,AccntHldr;
    int amnt;
    cout<<"Input the information of transaction"<<endl;
    cout<<"Date: ";
    cin>>Dt;
    
    cout<<"Payee: ";
    cin>>Payee;
    
    cout<<"Account Holder: ";
    cin>>AccntHldr;
    cout<<endl;
    
    cout<<"Amount : $";
    cin>>amnt;
    
    cout<<"Out put the check"<<endl;
    cout<<AccntHldr<<endl;
    cout<<"Street Address"<<endl;
    cout<<"City,State Zip"<<"\t\t"<<Dt<<endl;
    
    cout<<"Pay to the order of: "<<Payee<<"\t\t"<<"$ "<<amnt<<endl;
    wordProcessing(amnt);
    cout<<endl;
    cout<<"BAnk Of CSC5"<<endl;
    cout<<"For: Gotta Pay the Rent "<<"\t\t"<<AccntHldr;
    
    
    
    
}

void wordProcessing(int i)
{
    int a,b,c,d;
    a=i/1000;
    switch(a){
        case 0:cout<<"";
        break;
        case 1:cout<<"One thousand ";
        break;
        case 2:cout<<"Two thousands ";
        break;
        case 3:cout<<"Three thousands ";
        break;
        case 4:cout<<"Four thousands ";
        break;
        case 5:cout<<"Five thousands ";
        break;
        case 6:cout<<"Six thousands ";
        break;
        case 7:cout<<"Seven thousands ";
        break;
        case 8:cout<<"Eight thousands ";
        break;
        case 9:cout<<"Nine thousands ";
        break;
    }
    b=(i-a*1000)/100;
    switch(b){
        case 0:cout<<"";
        break;
        case 1:cout<<"One hundred ";
        break;
        case 2:cout<<"Two hundreds ";
        break;
        case 3:cout<<"Three hundreds ";
        break;
        case 4:cout<<"Four hundreds ";
        break;
        case 5:cout<<"Five hundreds ";
        break;
        case 6:cout<<"Six hundreds ";
        break;
        case 7:cout<<"Seven hundred ";
        break;
        case 8:cout<<"Eight hundred ";
        break;
        case 9:cout<<"Nine hundred ";
        break;
    }
    c=(i-a*1000-b*100)/10;
    d=i%10;
    switch(c){
        case 0:cout<<"";
        break;
        case 1:{
        switch(d){
        case 0:cout<<"Ten Dollar";
        break;
        case 1:cout<<"Eleven Dollar";
        break;
        case 2:cout<<"Twelve Dollar";
        break;
        case 3:cout<<"Thirteen Dollar";
        break;
        case 4:cout<<"Fourteen Dollar";
        break;
        case 5:cout<<"Fifteen Dollar";
        break;
        case 6:cout<<"Sixteen Dollar";
        break;
        case 7:cout<<"Seventeen Dollar";
        break;
        case 8:cout<<"Eighteen Dollar";
        break;
        case 9:cout<<"Nineteen Dollar";
        break;
        }
        break;
    }
            
            
       
        case 2:cout<<"Twenty ";
        break;
        case 3:cout<<"Thirty ";
        break;
        case 4:cout<<"Forty ";
        break;
        case 5:cout<<"Fifty ";
        break;
        case 6:cout<<"Sixty ";
        break;
        case 7:cout<<"Seventy ";
        break;
        case 8:cout<<"Eighty ";
        break;
        case 9:cout<<"Ninety ";
        break;
    }
    if(c!=1)
    {
    switch(d){
        case 0:cout<<"Dollar";
        break;
        case 1:cout<<"One Dollar";
        break;
        case 2:cout<<"Two Dollar";
        break;
        case 3:cout<<"Three Dollar";
        break;
        case 4:cout<<"Four Dollar";
        break;
        case 5:cout<<"Five Dollar";
        break;
        case 6:cout<<"Six Dollar";
        break;
        case 7:cout<<"Seven Dollar";
        break;
        case 8:cout<<"Eight Dollar";
        break;
        case 9:cout<<"Nine Dollar";
        break;
        }
        
            
    }
            
    
            
}
void prob4()
{
     int package,hour;
    float total1,total2,total3=29.95;
    float test;
    cout<<"Which package did you choose"<<endl;
    cin>>package;
    cout<<"How many hours you use?"<<endl;
    cin>>hour;
   
        if(hour<=5)
        {
            total1=16.75;
            total2=23.75;
           
        }
        if(hour>5 && hour<=20)
        {
            total1=16.75+0.75*(hour-5);
            if(hour>15)
                total2=23.75+0.55*(hour-15);
            else total2=23.75;
        }
        if(hour>20)
        {
            total1=16.75+0.75*15+(hour-20);
            if(hour>25)
                total2=23.75+10*0.55+0.70*(hour-25);
            else total2=23.75+0.55*(hour-15);
        }
cout<<total1<<" "<<total2<<" "<<total3<<endl;    
if(package==1)

{
    cout<<"Your cost will be $"<<total1<<endl;
    if(total1==min(total1,total2,total3))
        cout<<"You choose the best package"<<endl;
    if(total2==min(total1,total2,total3))
    {
        cout<<"You should get the package 2"<<endl;
        cout<<"You will save $"<<total1-total2<<endl;
    }
    if(total3==min(total1,total2,total3))
    {
        cout<<"You should get the package 3"<<endl;
        cout<<"You will save $"<<total1-total3<<endl;
    }
}
if(package==2)
    {
    cout<<"Your cost will be $"<<total2<<endl;
    if(total2==min(total1,total2,total3))
        cout<<"You choose the best package"<<endl;
    if(total1==min(total1,total2,total3))
    {
        cout<<"You should get the package 1"<<endl;
        cout<<"You will save $"<<total2-total1<<endl;
    }
    if(total3==min(total1,total2,total3))
    {
        cout<<"You should get the package 3"<<endl;
        cout<<"You will save $"<<total2-total3<<endl;
    }
}
    
if(package==3)
    {
    cout<<"Your cost will be $"<<total3<<endl;
    if(total3==min(total1,total2,total3))
        cout<<"You choose the best package"<<endl;
    if(total2==min(total1,total2,total3))
    {
        cout<<"You should get the package 2"<<endl;
        cout<<"You will save $"<<total3-total2<<endl;
    }
    if(total1==min(total1,total2,total3))
    {
        cout<<"You should get the package 1"<<endl;
        cout<<"You will save $"<<total3-total1<<endl;
    }
}


  
}
float min(float a,float b,float c)
{
    float min;
    if(a<b)
        min=a;
    else min=b;
    if(min>c)
        return c;
    else return min;
}
void prob5()
{
    float PayRate,grossPay;
    int hour;
    cout<<"How many hours the worker worked"<<endl;
    cin>>hour;
    cout<<"How much the pay rate per hour"<<endl;
    cin>>PayRate;
    if(hour<=20)
        grossPay=PayRate*hour;
    if(hour>20 && hour<=40)
        grossPay=PayRate*20+PayRate*2*(hour-20);
    if(hour>40)
        grossPay=PayRate*20+PayRate*2*20+PayRate*3*(hour-40);
    cout<<"The gross pay is $"<<grossPay<<endl;
    
        
    
}
void prob6()
{
    float sum=0;
    float x,test;
    int n;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    cout<<"Enter the number of term "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+pow(-1,i+1)*pow(x,2*i-1)/factorial(2*i-1);
    }
    cout<<sum;
    
    
   
}
long factorial(int i)
{
   
    if(i==0)
        return 1;
    return i*factorial(i-1);
   
    }



