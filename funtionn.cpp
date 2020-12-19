#include<iostream>
using namespace std;
void swaping(int x, int y); // function decleration or prototype
 
int main()
{ 
    int a, b ;
    cout<<"enter the two numbers"<<endl;
    cin>>a>>b;
    cout<<"after swapping"<<endl;
    swaping(a,b); // passing value to function(function call)here a and b are called actual arguments
    return 0;
}
 void swaping(int a, int b)// function definition here a, b are called formal arguments
{
    int temp;
    temp = a;
    a= b;
    b = temp;
    cout<<"value of a :"<<a<<endl;
    cout<<"value of b :"<<b<<endl;
}