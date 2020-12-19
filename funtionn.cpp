#include<iostream>
using namespace std;

/*void swaping(int x, int y); // function decleration or prototype
       
int main()
{ 
    int a, b ;
    cout<<"enter the two numbers"<<endl;
    cin>>a>>b;
    cout<<"after swapping"<<endl;
    swaping(a,b); // passing value to function(function call)here a and b are called actual arguments
    cout<<"value of a in main:"<<a<<endl;//a=3
    cout<<"value of b in main:"<<b<<endl;//b=4
    return 0;
}
 void swaping(int a, int b)// function definition here a, b are called formal arguments
{
    int temp;
    temp = a;
    a= b;
    b = temp;
    cout<<"value of a in function :"<<a<<endl;//a=4
    cout<<"value of b in function:"<<b<<endl; //b=3
}*/
//changes mde in function defination to formal arguments will not effect the actual arguments 

/*
//call by reference using refrence variable &
void swaping(int &x, int &y); // function decleration or prototype
       
int main()
{ 
    int a, b ;
    cout<<"enter the two numbers"<<endl;
    cin>>a>>b;
    
   
    cout<<"value of a :"<<a<<endl;
    cout<<"value of b :"<<b<<endl;
     swaping(a,b); // passing value to function(function call)here a and b are called actual arguments
    return 0;

}
 void swaping(int &a, int &b)// function definition here a, b are called formal arguments
{
    int temp;
    temp = a;
    a= b;
    b = temp;
    cout<<"value of a :"<<a<<endl;
    cout<<"value of b :"<<b<<endl; 
}*/
// chnges mde in function definetion to formal parameters will efeect the actual arguments in the caller

//using pointer variable
void swaping(int *x, int *y); // function decleration or prototype
       
int main()
{ 
    int a, b ;
    cout<<"enter the two numbers"<<endl;
    cin>>a>>b;
    
     swaping(&a,&b); // passing value to function(function call)here a and b are called actual arguments
     cout<<"value of a :"<<a<<endl;
    cout<<"value of b :"<<b<<endl;
    return 0;

}
 void swaping(int *a, int *b)// function definition here a, b are called formal arguments
{
    int temp;
    temp = *a;
    *a= *b;
    *b = temp;
    
    cout<<"value of a :"<<*a<<endl;
    cout<<"value of b :"<<*b<<endl;
   
     
}