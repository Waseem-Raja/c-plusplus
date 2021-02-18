
//constructors in cpp

#include<iostream>
using namespace std;
class defaultt
{
  public:
   defaultt()
   {
      cout<<"hello default constructor";
      
   }
   
   defaultt()
   {
      cout<<"hello default constructor";
      
   }

};
int main()
{
   defaultt a;
   defaultt f;
    


}




/*
// constructor taking arguments

#include <iostream>
using namespace std;
 
class construct 
{
public:
    int a, b,c;

    construct(int x, int y)    // constructor overloading depends on arguments
    {                  
        a = x;
        b = y;
        cout<<a+b<<endl;
    }

   construct(int x, int y, int z)
    {
        a = x;
        b = y;
        c=z;
        cout<<a+b+c<<endl;
    }

};

 
int main()
{
    construct c(2,3);  //calling to constructor1 coz only two arguments
    construct u(2,3,4); // calling to con2 having 3 arguments
    return 0;
}*/