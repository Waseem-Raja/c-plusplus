/*#include<iostream>
using namespace std;

int add(int a,int b)
{
    int c=a+b;
    cout<<c;

  

}
int main()
{

int (*addd)(int,int); // decleration of function poniter
   addd=add;  //here u can write &add as well its optional, add functions address is stored in function pointer addd
     (*add)(3,4); // here u can write as add or *add





}
*/
//function pointer as switch
#include<iostream>
using namespace std;

float add(float x, float y)
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
float mull(float x , float y)
{
          float z=x*y;
       
      cout<<"multiplication of two numbers is :"<<z<<endl;
          
}



int main()
{
   int choice,a,b;
        cout<<"enter 0 for ADD, 1 for sub, 2 for mul, 3 for divide "<<endl;
        cout<<"enter the choice"<<endl;
        cin>>choice;
    if(choice>3||choice<0)
             cout<<"invalid choice"<<endl;
     else
     {
             float (*ptr[])(float, float)={add,minuss,mull,divsionn}; //decleration of function pointer here is function pointer
             cout<<"enter the ist number"<<endl;                    //decleared as array cox we have multiple functions
             cin>>a;
             cout<<"enter the 2nd number"<<endl;
             cin>>b;
            (ptr[choice])(a,b);
     }      






}
