#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"enter the size of your array "<<endl;
    cin>>size;

   int arr[size];
   cout<<"enter the  ["<<size<<"] elements "<<endl;
   for ( int i = 0; i < size; i++)
   {
       cin>>arr[i];
   }
   

   int sum=0;
   for (int i= 0; i < size; i++)
   {
       sum=arr[i]+sum;
   }
   
   cout<<"sum of entered array is " <<sum;

}