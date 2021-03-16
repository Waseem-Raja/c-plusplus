#include<iostream>
using namespace std;

/*class add
{
    public:
  static int x; // its having only 1 memory location 
  
    void display()
    {
        cout<<x;  // here output will be 4
    }
    
};
int add::x=10;
int main()
{
    add a,b;
    a.x=4;  ///here um assigning obj a to 4 
    b.display(); // here i dont assign any value to x but it countains the value 4 because its having only
    //only memory location 



}*/

//static function
class stfun
{
    public:
     int static fun(int y)
     {
          int x=y;
          int c=x+5;
          cout<<c;
     }
     
};
int ::fun(int y);
int main()
{
   stfun a, b;
   a.fun(5);
   b.fun(4);
    


}