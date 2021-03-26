#include<iostream>
using namespace std;
//constructors cant be inherited but the constructor of super class can be invoked from the subclass
/*class teacher
{
    int a,b;
    public:
    teacher()
    {
        cout<<"defualt constructor"<<endl;
    }
     teacher(int x, int y)
    {
        a=x;
        b=y;
        cout<<a <<b<<endl;
    }


};
class student: public teacher
{
    public:
    student(): teacher(12,14) //by writing this parameterised constructor of parent class will be called
    {
        cout<<"default constructor of student "<<endl;
    }
};
int main()
{
  student obj; //first parent class defualt constructor will be called then the childs

}*/
//multiple inheritance
class A
{
    public:
   A()
   {
       cout<<"default constructor of A"<<endl;
   }
};
class B
{
    public:
    B()
    {
         cout<<"default constructor of B"<<endl;
    }
};
class c:public A, public B
{
    public:
    c()
    {
        cout<<"Default constructor of C"<<endl;
    }
};
int main()
{
    c obj;
}