#include<iostream>
using namespace std;

class student
{
    protected:
    int rollNO;
    public:
    void getNumber()
    {
        cout<<"enter the rollno"<<endl;
        cin>>rollNO;
    }
    void putNumber()
    {
        cout<<"Roll NO is :"<<rollNO<<endl;
    }
};
class test: public student
{
  protected:
  float sub1,sub2;
  public:
  void getMarks()
  {
     cout<<"enter the marks of sub1"<<endl;
     cin>>sub1;
     cout<<"enter the marks of sub2"<<endl;
     cin>>sub2;
     
  }
  void putMarks()
  {

     cout<<"Marks are :"<<sub1<<"/n"<<sub2<<endl;

  }
};
class result: public test
{
    float total;
    public:
    void display()
    {
        total=sub1+sub2;
        cout<<"Roll no is :"<<rollNO<<endl;
        cout<<"the total marks are :"<<total<<endl;
    }

};
int main()
{
    result r;
    r.getNumber();
    r.getMarks();
    r.display();
}