/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 22, 2016, 11:18 AM
 */

#include <cstdlib>
#include<iostream>
#include<cmath>
#include<string>

using namespace std;

/*
 * 
 */
//Function Prototypes
void Start(int i);
int Difference(int a,int b,int c);
void Sort(int a[7]);

int pair(int a[7]);
void twoPair(int a[7]);
int ThreeOfAKind(int a[7]);
int Straight(int a[7]);
int Flush(int a[7]);
int FullHouse(int a[7]);
int FourOfAKind(int a[7]);
int RoyalFlush(int a[7]);


int main(int argc, char** argv) {
    int Card[52]={11,21,31,41,51,61,71,81,91,101,111,121,131,12,22,32,42,52,62,72,82,92,102,112,122,132,
            13,23,33,43,53,63,73,83,93,103,113,123,133,14,24,34,44,54,64,74,84,94,104,114,124,134};
    
    int Player1Card1,Player1Card2,Player2Card1,Player2Card2;
    int CardBoard[5];
    int Player1[7],Player2[7];
    for(int i=1;i<=2;i++)
    {
        do
        {
            srand(time(NULL));
            Player1Card1=Card[rand()%52];
            Player2Card1=Card[rand()%52];
            Player1Card2=Card[rand()%52];
            Player2Card2=Card[rand()%52];
            
        }while( Player1Card1== Player1Card2|| Player1Card1== Player2Card1|| Player1Card1== Player2Card2|| Player1Card2== Player2Card1|| Player1Card2== Player2Card2|| Player2Card1== Player2Card2);
        
    }
    cout<<" Player1' Cards : "<<endl;
    Start(Player1Card1);
    cout<<" and ";
    Start(Player1Card2);
    cout<<endl;
    cout<<" Player2' Cards : "<<endl;
    Start(Player2Card1);
    cout<<" and ";
    Start(Player2Card2);
    cout<<endl;
    for(int i=0;i<52;i++)
    {
        if(Card[i]==Player1Card1||Card[i]==Player1Card2||Card[i]==Player2Card1||Card[i]==Player2Card2)
            Card[i]=0;
    }
    
    do
    {
    
    CardBoard[1]=Card[rand()%52];
    CardBoard[2]=Card[rand()%52];
    CardBoard[3]=Card[rand()%52];
    }while (Difference(CardBoard[1],CardBoard[2],CardBoard[3])!=1);
    cout<<" The Flush is : "<<endl;
    Start(CardBoard[1]);
    cout<<", ";
    Start(CardBoard[2]);
    cout<<" and ";
    Start(CardBoard[3]);
    
    return 0;
}

void Start(int i)
{
     switch(i)
    {
        case 11: cout<<"Spades Ace";
        break;
        case 21: cout<<"Spades Two";
        break;
        case 31: cout<<"Spades Three";
        break;
        case 41: cout<<"Spades Four";
        break;
        case 51: cout<<"Spades Five";
        break;
        case 61: cout<<"Spades Six";
        break;
        case 71: cout<<"Spades Seven";
        break;
        case 81: cout<<"Spades Eight";
        break;
        case 91: cout<<"Spades Nine";
        break;
        case 101: cout<<"Spades Ten";
        break;
        case 111: cout<<"Spades Jack";
        break;
        case 121: cout<<"Spades Queen";
        break;
        case 131: cout<<"Spades King";
        break;
        case 12: cout<<"Club Ace";
        break;
        case 22: cout<<"Club Two";
        break;
        case 32: cout<<"Club Three";
        break;
        case 42: cout<<"Club Four";
        break;
        case 52: cout<<"Club Five";
        break;
        case 62: cout<<"Club Six";
        break;
        case 72: cout<<"Club Seven";
        break;
        case 82: cout<<"Club Eight";
        break;
        case 92: cout<<"Club Nine";
        break;
        case 102: cout<<"Club Ten";
        break;
        case 112: cout<<"Club Jack";
        break;
        case 122: cout<<"Club Queen";
        break;
        case 132: cout<<"Club King";
        break;
        case 13: cout<<"Diamond Ace";
        break;
        case 23: cout<<"Diamond Two";
        break;
        case 33: cout<<"Diamond Three";
        break;
        case 43: cout<<"Diamond Four";
        break;
        case 53: cout<<"Diamond Five";
        break;
        case 63: cout<<"Diamond Six";
        break;
        case 73: cout<<"Diamond Seven";
        break;
        case 83: cout<<"Diamond Eight";
        break;
        case 93: cout<<"Diamond Nine";
        break;
        case 103: cout<<"Diamond Ten";
        break;
        case 113: cout<<"Diamond Jack";
        break;
        case 123: cout<<"Diamond Queen";
        break;
        case 133: cout<<"Diamond King";
        break;
        case 14: cout<<"Heart Ace";
        break;
        case 24: cout<<"Heart Two";
        break;
        case 34: cout<<"Heart Three";
        break;
        case 44: cout<<"Heart Four";
        break;
        case 54: cout<<"Heart Five";
        break;
        case 64: cout<<"Heart Six";
        break;
        case 74: cout<<"Heart Seven";
        break;
        case 84: cout<<"Heart Eight";
        break;
        case 94: cout<<"Heart Nine";
        break;
        case 104: cout<<"Heart Ten";
        break;
        case 114: cout<<"Heart Jack";
        break;
        case 124: cout<<"Heart Queen";
        break;
        case 134: cout<<"Heart King";
        break;
        
}
}
int Difference(int a,int b,int c)
{
    if(a==b || a==c || b==c || a==0 || b==0 ||c==0)
        return 0;
    else return 1;
            
}
int Pair(int a[7])

{
    int pair=0;
    for(int i=0;i<6;i++)
        for(int j=i+1;j<7;j++)
        {
            if (a[i]/10==a[j]/10)
                pair++;
        }
    if (pair==1)
        return 1;
    else 
        return 0;
}
int twoPair(int a[7])

{
    int pair=0;
    for(int i=0;i<6;i++)
        for(int j=i+1;j<7;j++)
        {
            if (a[i]/10==a[j]/10)
                pair++;
        }
    if (pair==2)
        return 1;
    else 
        return 0;
}

int ThreeOfAKind(int a[7])
{
    int pair=0;
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(a[i]/10==a[j]/10)
            pair++;
        }
        if(pair<2)
            pair=0;
       
    }
    if (pair==2)
        return 1;
    else return 0;
}
int FourOfAKind(int a[7])
{
    int pair=0;
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(a[i]/10==a[j]/10)
            pair++;
        }
        if(pair<3)
            pair=0;
       
    }
    if (pair==3)
        return 1;
    else return 0;
}
void Sort(int a[7]){
    for(int i=0;i<6;i++){
        for(int j=i+1;j<7;j++){
            if(a[i]>a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
}
int Straight(int a[7])
{
    int flag;
    int temp=0;
    for(int i=0;i<7;i++)
        a[i]=a[i]/10;
    Sort(a);
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<7;j++)
           
        {
            temp=temp+(a[j]-a[i]);
        }
        if(temp==10)
            flag=1;
        temp=0;
        
    }
    if(flag==1)
        return 1;
    else
        return 0;
    
}
int Flush(int a[7])
{
    int count=0,flag;
    for(int i=0;i<7;i++)
        a[i]=a[i]%10;
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(a[i]=a[j])
                count++;
        }  
        if(count>=5)
        {
            flag=1;
            count=0;
        }
    }  
    if(flag==1)
        return 1;
    else 
        return 0;
}
int FullHouse(int a[7])
{
    if(ThreeOfAKind(a)==1&&Pair(a)==1&&FourOfAKind(a)==0)
        return 1;
    else
        return 0;
    
}
int RoyalFlush(int a[7])
{
    if(Straight(a)==1 && Flush(a)==1)
}