//friend function
//friend fun can acesss every class private members 
#include<iostream>
using namespace std;
class bankdepart;
class schooldepart
{
   int salary;
   public:
   void init(int s)
   {
       salary=s;
   }


 friend  void salaryperyear(schooldepart s, bankdepart b);

};
class bankdepart
{
  int salary;
  public:
   void init(int s)
   {
       salary=s;
   }
friend void salaryperyear(schooldepart s, bankdepart b); // decleration of friend function and 
//arguments as objects

};

void salaryperyear(schooldepart s, bankdepart b)// friend function is defined outside the class
{
    int salary;
    salary=s.salary;
    int spy=salary*12;
    cout<<"salary per year for school employ :" <<spy<<endl;
    salary=b.salary;
    
    int spyy=salary*12;
    cout<<"salary per year is for bank employ:" <<spyy;

}



int main()
{
    schooldepart s;
    bankdepart b;
    s.init(12000);
    b.init(45000);
    salaryperyear(s,b);// calling friend fun normally like other funs taking objects as arguments  

}