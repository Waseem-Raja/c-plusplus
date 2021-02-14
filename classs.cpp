// classes and objects 
#include<iostream>
using namespace std;
class student
{
    //public:
   // private:
      protected:

    int rollno;
    string name;

  public: void setRollno(int x, string nam)
  {
      rollno=x;
      name=nam;

  }
  public: void getinfo()
  {
      cout<<rollno<<endl;
      cout<<name;
  }
  


};



int main()
{
    student s1;
   // s1.name="waseem"; // we can't access the private data members of a class with dot operator 
                       //only the member functions or the friend function are allowed to access
 //   s1.rollno=12345;
    
    s1.setRollno(222,"hello");
    s1.getinfo();


}