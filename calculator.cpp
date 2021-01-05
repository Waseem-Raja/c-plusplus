#include<iostream>
using namespace std;
float pluss(float x, float y)
{
       float z=x+y;
       cout<<"addition of two numbers is :"<<z<<endl;
}
float minuss(float x, float y)
{
           float z=x-y;
       cout<<"subtraction of two numbers is :"<<z<<endl;

}
float divsionn(float x, float y)
{
           float z=x/y;
 cout<<"division of two numbers is :"<<z<<endl;

}
int modulouss(int x, int y)
{
           int z=x%y;
       cout<<"modulous of two numbers is :"<<z<<endl;
}
float mull(float x , float y)
{
          float z=x*y;
       
      cout<<"multiplication of two numbers is :"<<z<<endl;
          
}




int main()
{
    float num1,num2;
   cout<<"enter the ist number :"<<endl;
   cin>>num1;

   cout<<"enter the 2nd number :"<<endl;
   cin>>num2;


      
       
int x;
cout<<"please enter:  1 for addition , 2 for subtraction, 3 for multiplication, 4 for division , 5 for modulous"<<endl;
cout<<"enter among 12345"<<endl;
cin>>x;

switch (x)
{
case 1:
            pluss(num1,num2);   
      
          
    break;

case 2:
               minuss(num1,num2);   
                
    break;
case 3:
        mull(num1,num2);   
    break;
case 4:
           divsionn(num1,num2);   
      
      
    break;
case 5:
                    modulouss(num1,num2);   
      
            
    break;
default:
     cout<<"please enter valid operation";
    break;
}









}


