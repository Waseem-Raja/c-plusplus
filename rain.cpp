#include<iostream>
using namespace std;
#include<string.h> 
char str[]="yes";

int main()
{
    
     char c[3];
 cout<<"is rainning";
 cin>>c;
 int res=strcmp(str, c);
  if (res==1)
  {
    cout<<"go outside";
  }
  else if (res==0)
  {
      
      char by[3];
      cout<<"have an umberela";
      cin>>by;
      int b=strcmp(str,by);
      if (b==0)
      {
          cout<<"go outside";
      }
      else
      {
          cout<<"wait a while"<<endl;
          char bb[3];
          cout<<"is rainning";
          cin>>bb;
          int resss=strcmp(str, bb);
          if(resss==0)
          {
              cout<<"wait a while";
          }
          else
          {
              cout<<"go outside";
          }
          
          
      }
      
      
  }
  
  
  
  
  }
  
  




