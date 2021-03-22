#include<iostream>
using namespace std;
class add
{
    public:
    void display()
    {
        cout<<"this is a parent class"<<endl;
    }

};
class sub: public add   //this is sub class in public mode
{
    public:
     void displayy()
     {
         cout<<"this is a child class"<<endl;
     }

     void display()  // samme function in both the classes 
     {
         cout<<"function overriding"<<endl;
     }

};
int main()
{
   sub obj;
   obj.display(); // it will invoke the derived classs function if overrided otherwise parents
   obj.displayy();
   obj.add::display();//this will invoke parent class function when that function is being overrided
  
}
