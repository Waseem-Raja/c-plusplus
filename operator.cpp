#include<iostream>
using namespace std;
class add
{
    int x,y;
    public:
    add(void)
    {
        x=3;
    }
    add(int n)
    {
        y=n;
    }

    
    add  operator+(add c2)
     {
          add temp;
          temp.x=x+c2.y;
          return temp;

     }

void display()
    {
        cout<<"addition of these objects :"<<x;
    }



};
int main()
{
   add c;
   add c1(6);
   add c3=c+c1;
   c3.display();


}
