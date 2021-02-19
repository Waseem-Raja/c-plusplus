//function overloading
#include<iostream>
using namespace std;
class over
{   
    public:
    int a,b,c;
    int fun1(int x, int y) // function fun1 with 2 arguments  
    {                  
        a = x;
        b = y;
        cout<<a+b<<endl;
    }

   int fun1(int x, int y, int z)  //overloaded same fun1 function with 3 arguments
    {
        a = x;
        b = y;
        c=z;
        cout<<a+b+c<<endl;
    }

};

 
int main()
{
     over f;
     f.fun1(2,3);
      f.fun1(3,2,4);

    
}