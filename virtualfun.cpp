#include <iostream>
using namespace std;

class A
{
    
public:
     ~A()
    {
        cout<<"i am parents destructor"<<endl;
    }
   virtual  void display() //if i delete virtual keyword from this function
                           //then this function will be called
    {
        cout << "um parent class's function" << endl;
    }
};
class B : public A
{
public:
   ~B()
   {
       cout<<"um childs destructor"<<endl;
   }
    void display()
    {
        cout << "um child class's function" << endl;
    }
};
int main()
{
    A *a; //pointer of base class
    B b1; //object of derived class
    a = &b1;
    a->display(); //late binding occurs or dynamic binding


}
