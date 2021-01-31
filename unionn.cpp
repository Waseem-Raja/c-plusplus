
#include<iostream>
using namespace std;

union  student 
{
         // string  name;  we canot use strings with union
   
   char rollno;
   double r;  //size of union is decided by the size of largest member of union
     };

int main()
{
    student s1,s2;
    /*s1.rollno=30;
    s2.rollno=39;
    
    cout<<s1.rollno<<endl;
    cout<<s2.rollno<<endl;*/
    cout<<sizeof(s1)<<endl;  // 8 bytes 
    cout<<sizeof(s2)<<endl;





}

