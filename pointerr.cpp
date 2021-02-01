//pointers in cpp

#include<iostream>
using namespace std;

int main()
{   int y=6;
    int x=7;

/*
    int *p,*p1;     // pointer decleration
     p=&x;       //assigining the address of x to p
     cout<<p<<endl;  // address of x
     cout<<*p<<endl;       // value at address of x

     p1=&y;
      int c=*p1+*p;
      cout<<c;
     */
    //void pointer  can hold address of any datatype cox its sixe is platform dependent
    float h=7.1;
    int c=4;
        void *f;
        
        f=&h;
        cout<<*(float*)f<<endl;  // *f wrong
        f=&c;
        cout<<*(int*)f;  // here we explicitly tell void pointer that its int cox he doesnot know 



}