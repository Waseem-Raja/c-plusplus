//copy constructor
#include <iostream>
using namespace std;
class copy1
{
    public:
    int a;
   copy1(int x)
   {
      a=x;
      cout<<a<<endl;
   }
   copy1(copy1 &obj)   // copy constructor
   {
       a=obj.a;
       cout<<a<<endl;
   }



};
int main()
{
  copy1 a(2);
   copy1 c(a);  //passing object a to copy constructor

}