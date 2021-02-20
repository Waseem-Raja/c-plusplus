//destructor
#include<iostream>
using namespace std;

class employ
{

public:
   employ()
   {
       cout<<"invoking constructor"<<endl;
   }

   ~employ() //this is called automaticaly when object goes out of the scope that is when main fun ends
   {
       cout<<"invoked destructor"; // destroying the instances
   }



};

int main()
{
   employ c;



}