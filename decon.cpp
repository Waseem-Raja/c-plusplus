#include<iostream>
using namespace std;

class employ
{

public:
   employ()
   {
       cout<<"invoking constructor"<<endl;
   }

   ~employ()
   {
       cout<<"invoked destructor"; // deleting the object
   }



};

int main()
{
   employ c;



}