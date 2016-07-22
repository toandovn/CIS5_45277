/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Toan
 *
 * Created on July 18, 2016, 10:02 AM
 */
//System Libraries
#include <cstdlib>//Setting random seed
#include<iostream>//Input output library
#include<cmath>//Math library
#include<fstream>// read write file library
#include<string>//string library


using namespace std;//Namespace of the System Libraries
//User Libraries

//Global Constants
//Function Prototypes
void game1();
void game2();
void guess();

/*
 * 
 */
int main(int argc, char** argv) {
     //Declare Variables
   
    int choice;
    //input data
    cout<<"This game is made to determine your ability in fast calculating"<<endl;
    cout<<"You have to give the right answer in order to increase your score"<<endl;
    cout<<"once you give an incorrect answer, the program will stop and display your answer";
    cout<<" as well as your ability status so far"<<endl;
    cout<<"It also write on a file name named result.txt to display your last score"<<endl;
    cout<<"If you want to exit the game, press y"<<endl;
    cout<<"Great news!!Now you can play with your friend and guessing game"<<endl;
    cout<<"Press 1 to play invidually"<<endl; 
    cout<<"Press 2 to play with your friend"<<endl; 
    cout<<"Press 3 to play guessing number"<<endl;
    cin>>choice;
    cout<<"Are you ready?"<<endl;
    cout<<"Let the game begin!!!"<<endl;
    if(choice==1)
        game1();
        
    if (choice==2)
        game2();
    if(choice==3)
        guess();
    return 0;         
}
void game1()//single player mode
{
 int a,b;//random seed
 int sum;//sum of random seed
 int answer,score=-1;//answer and initial score
 string firstname,lastname;//name of user
 int level;//level of user
 //input data
  cout<<"Enter your first name: ";
 cin>>firstname;
 cout<<"Enter your last name: ";
 cin>>lastname;
 cout<<endl;
 //execution start here
 do
 {
     
     if(score>=-1&&score<=15)
     {
   srand (time(NULL));
   a=rand()%10+1;
   b=rand()%10+1;
   if (score==-1)
   cout<<"You are in the first level"<<endl;
   level=1;
     }
     if(score>=16&&score<=25)
     {
     if (score==16)
    cout<<"Congratulation! You are up to the level 2"<<endl;
  
   a=rand()%100+1;
   b=rand()%100+1;  
   level=2;
     }
     if(score==26)
     {
         cout<<"Great works!! You are now in level 3"<<endl;
  
   a=rand()%1000+1;
   b=rand()%1000+1;
   level=3;
     }
   sum=a+b;
   cout<<a<<"+"<<b<<"=";
   cin>>answer;
   score=score+1;
   }while(answer==sum && answer!='y');
   cout<<"Your score is "<<score<<endl;
   fstream myfile;//file name variable
   
   myfile.open("result.txt", std::ios_base::app | std::ios_base::out);//creat a file a write on it with overwritten
   //write on the file
   myfile<<"Name : "<<firstname<<" "<<lastname<<"\n\n";
   myfile<<endl<<endl;
   myfile<<"  Score: "<<score<<endl;
   myfile<< " Level: "<<level<<endl;
   myfile<<" || ";
   //output the result
   if(score<=5)
       cout<<"You have problems with calculating"<<endl;
   if(score>5 &&score<=15)
       cout<<"You are good calculator, just practice more"<<endl;
   if(score>15 && score<=25)
       cout<<"Good job. Your ability in calculating is really great "<<endl;
   if(score>25)
       cout<<"ABSOLUTELY GENUIS!!!!"<<endl;
   
}
void game2()//double player mode
{
string player1,player2;//name of 2 players
int number1,number2;//random seed to determine who plays first
int seed1,seed2,answer1,answer2;//random seeds and answer of two players
int score1=0,score2=0;//score of each players
int sum1,sum2;//sum of two random seed of two players
//Input data

cout<<"Enter player 1's name: ";//player 1
cin>>player1;
cout<<"Enter player 2's name: ";//player 2
cin>>player2;
cout<<"Two random number will be assign to determine who go first"<<endl;
srand (time(NULL));
number1=rand()%10+1;//two random number to determine who goes first
number2=rand()%10+1;
cout<<player1<<" 's number: "<<number1<<endl;
cout<<player2<<" 's number: "<<number2<<endl;

if(number1>=number2)//player 1 go first
{
    cout<<"Player 1 is going to play first"<<endl;
    do{
        
    
    seed1=rand()%100+1;
    seed2=rand()%100+1;
    sum1=seed1+seed2;
    cout<<"Player 1 :"<<endl;
    cout<<seed1<<"+"<<seed2<<"=";
    cin>>answer1;
    if (answer1==sum1)
        score1=score1+1;
    seed1=rand()%100+1;
    seed2=rand()%100+1;
    sum2=seed1+seed2;
    cout<<"Player 2 :"<<endl;
    cout<<seed1<<"+"<<seed2<<"=";
    cin>>answer2;
    if (answer2==sum2)
        score2=score2+1;
}while(answer1==sum1&&answer2==sum2);
}
if(number1<number2)//number 2 goes first
{
    cout<<"Player 2 is going to play first"<<endl;
    do{
        
    
    seed1=rand()%100+1;
    seed2=rand()%100+1;
    sum2=seed1+seed2;
    cout<<"Player 2 :"<<endl;
    cout<<seed1<<"+"<<seed2<<"=";
    cin>>answer2;
    if (answer2==sum2)
        score2=score2+1;
    seed1=rand()%100+1;
    seed2=rand()%100+1;
    sum1=seed1+seed2;
    cout<<"Player 1 :"<<endl;
    cout<<seed1<<"+"<<seed2<<"=";
    cin>>answer1;
    if (answer1==sum1)
        score1=score1+1;
}while(answer1==sum1&&answer2==sum2);
}
cout<<player1<<" score: "<<score1<<endl;
cout<<player2<<" score: "<<score2<<endl;
if(score1>score2)
    cout<<player1<<" wins over "<<player2<<endl;
else
cout<<player2<<" wins over "<<player1<<endl;

}
void guess()
{
   int number;//secret number
   int chance=1;//chance user used to guess
   int guess;//number that user guess
   cout<<"A secret number from 1-99 will be choose randomly and you have 7 changes to find it out"<<endl;
   srand (time(NULL));
   number=rand()%100;
   do
   {
       cout<<"You have "<<7-chance+1<< " chances left "<<endl;
       switch(chance)
       {
           
               case 1: cout<<"Your first guess: ";
               break;
               case 2: cout<<"Your second guess: ";
               break;
               case 3: cout<<"Your third guess: ";
               break;
               case 4: cout<<"Your forth guess: ";
               break;
               case 5: cout<<"Your fifth guess: ";
               break;
               case 6: cout<<"Your sixth guess: ";
               break;
               case 7: cout<<"Your seventh guess: ";
               break;
       }
           cin>>guess; 
           chance=chance+1;
           if(guess<number)
               cout<<"The secret number is greater than your guess"<<endl;
         if(guess>number)
               cout<<"The secret number is less than your guess"<<endl;
           if(guess==number)
               cout<<"Congratulation!!! You get the right guess "<<endl;
           if(chance>7)
           {
               cout<<"Your chance is over"<<endl;
               cout<<"Good luck for the next time"<<endl;
           }
               
                   
   }while(chance<=7||guess==number);
   
}

