#include<iostream>
using namespace std;

int main()
{

  // int i;

 // int arr[5]={1,2,3,4,5};
  
   //   cout<<"enter the 5 digit number"<<endl;
      //cin>>arr[i]=;
       /*   cout<<"Reverse of enterd number is :";
      for (i = 4; i >=0; i--)
       {
         cout<<arr[i];
       }*/
   //taking number from the user
    int arr[5],i;
       cout<<"enter the number";
    for ( i = 0; i<5; i++)
    {
      cin>>arr[i];
    }
    cout<<"reverse of enterd number is  :";
    for ( i=4; i>=0; i--)
    {
      cout<<arr[i];
    }
    
    


}