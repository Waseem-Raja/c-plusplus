#include<iostream>
using namespace std;

int add(int a,int b)
{
    int c=a+b;
    cout<<c;

  

}
int main()
{

int (*addd)(int,int);
   addd=add;
     (*add)(3,4);





}