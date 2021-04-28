//Exception Handling
#include <iostream>
using namespace std;

// int main()
// {
//     int x;
//  cout<<"enter the number"<<endl;
//  cin>>x;
//  try
//  {
//      if (x<0)
//      {
//         throw x;
//      }
//      else
//      cout<<"division :"<<100/x<<endl;

//  }
// //  catch(int y)   // the thwros and the catch datatype should match
// //  {
// //     cout<<"Exception handled"<<endl;
// //  }
//  catch(...)  //this catch can handle all type of errors irrespective of their datatypes
//  {
//            cout<<"Exception handled"<<endl;
//  }

//   cout<<"end of the program";

// }

// nested try
// int main()
// {

//     try
//     {
//         try
//         {
//             throw 2;
//         }
//         catch (int x)
//         {
//                 cout<<"Exception handled"<<endl;
//                 throw;  // this throw will be handled by outer trys catch block
//         }
//     }
//     catch (int t)
//     {
//            cout<<"Exception handled"<<endl;
//     }
// }

// try in a function

// void fun() throw(int)   // we can put a contraint for what to retrow
// {
    
//     try
//     {
//         throw 2;
//     }
//     catch (int u)
//     {
//         cout << "Exception handled" << endl;
//         throw;
//     }
    
// }
// int main()
// {
//     try
//     {
//         fun();
//     }
//     catch (int r)
//     {

//         cout << "Exception handled" << endl;
//     }
// }

// throw object

class a
{
   public:
   void display()
   {
       cout<<"in class a "<<endl;
   }

};
int main()
{
  a obj;
  try
  {
  
  throw new a();
  }
  catch(a *objj)
  {
      cout<<"handled"<<endl;
      objj->display();
  }




}
