
#include<string.h>
#include<iostream>
using namespace std;

union  student 
{
         // string  name;  we canot use strings with union
   
   int rollno;
   int phn;
   char r[20];  //size of union is decided by the size of largest member of union
     };

int main()
{
    student s1,s2;
    /*
    s1.rollno=6;
    s1.phn=77777;
    strcpy(s1.r,"raja");

    cout<<s1.phn<<endl;
    cout<<s1.r<<endl;   //here only raja will be printed which is assigned at the last to memoray location
    cout<<s1.rollno;*/
     

     //way 2
   // here all values will be printed cox every value is printed when they are used
     
    s1.rollno=6;
    cout<<s1.rollno<<endl;
    s1.phn=77777;
    cout<<s1.phn<<endl;
    strcpy(s1.r,"raja");
      cout<<s1.r<<endl;  
    





   // cout<<sizeof(s1)<<endl;  // 8 bytes 
    //cout<<sizeof(s2)<<endl;





}

