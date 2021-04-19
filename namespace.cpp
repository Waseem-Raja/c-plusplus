#include <iostream>
using namespace std;
// namespace xyz
// {
//     int x=4;    // by the help of namespaces we can create same variables 
// }
// int x=6;
// int main()
// {
//    int c=xyz::x;  // call to the namespace
//    cout<<c;


// }
//class in namespace
/*namespace ns
{
   class add  //creating class inside a namespace
   {
     public:
     void displat()
     {
         cout<<"hello um in namespace"<<endl;
     }
    
   };
}
int main()
{
   ns::add obj; //creating object of a class add

   obj.displat();

}*/
//we can define a class outside of a namespace as well
namespace nst
{
    class des; // class decleard inside the namespace
    void display();// function decleard inside the namespace
}
class nst::des // class defined outside the namespace
{
    public:
    void displa()
    {
        cout<<"um outside namespace"<<endl;
    }
};
void::nst::display()  // function defined outside the namespace
{
    cout<<"um also being displayed outside the namespace"<<endl;
}
int main()
{
    nst::des obj; //creating object of a class
    obj.displa(); // calling 
    nst::display();
}