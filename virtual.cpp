#include<iostream>
using namespace std;
class a
{
   public:
   void display()
   {
         cout<<"virtual function"<<endl;
   }
};
class b:  public virtual a
{

};
class c: public virtual a
{

};
class d:public c, public b
{

};
int main()
{
    d obj;
    obj.display();
}