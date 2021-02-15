//GUESS the number game
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>

int guess(int n)
{
   int x=n,y;

   cout<<"Guess the number between 0 and 30"<<endl;
      cin>> y;
      if (y==x)
      {
          cout<<"you won, correct guess"<<endl;
          cout<<"MATCHED :computer :"<<x<<" ,and you :"<<y<<endl;
      }
      else if (y>x)
      {
           cout<<"oops its too high, try again"<<endl;
             guess(x);
      }
      else if (y<x)
      {
          cout<<"oops too low , try again"<<endl;
          guess(x);
      }
    
}

int main()
{  
   
   
    srand(time(NULL));
    int num=rand()%30;
    guess(num);
                



}