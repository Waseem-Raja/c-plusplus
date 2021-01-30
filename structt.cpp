
#include<iostream>
#include<string.h>
using namespace std;

struct student
{
    int rollno;     // data members
    string name;


     void show()  //member function
     {
         cout<<rollno<<endl;
         cout<<name<<endl;
     }
} s2;  // we can also make variables by writing them here

int main()
{
     //way 1
    struct student s1;  // here struct is optional
    s1.name="waseem";
    s1.rollno=1234;
    //way 2
    s2.name="amir";
    s2.rollno=134;
    
    s1.show();
    s2.show();

return 0;
}