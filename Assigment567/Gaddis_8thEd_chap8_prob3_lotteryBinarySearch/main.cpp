#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random
#include <iomanip>   //Formatting
#include <ctime>     //Time
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes


int binarySearch( int [], int value);



int main(int argc, char** argv) {
    
    int lottery[10],winningNum,result;
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
    
    do{
        cout<<"Enter the winning number: ";
        cin>>winningNum;
        if(winningNum<=0)
            cout<<"It must be positive. Please inlut again"<<endl;
    }while(winningNum<=0);
    result=binarySearch(lottery,winningNum);
    if(result==-1)
        cout<<"You do not won this week!!"<<endl;
    else
        cout<<"Congratulation!!! You won the lottery"<<endl;
   return 0; 
}  
int binarySearch( int lottery[10], int value)
{
    int first=0;
    int last=9,middle,position=-1;
    bool found=false;
    while(!found && first<=last)
    {
        middle=(first+last)/2;
        if (lottery[middle]==value)
        {
            found=true;
            position=middle;
        }
        else if(lottery[middle]>value)
            last=middle-1;
        else 
            first=middle+1;
    }
    return position;
}

    
