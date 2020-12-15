#include<iostream>
using namespace std;

//int main()
//{

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
   /* int arr[5],i;
       cout<<"enter the number";
    for ( i = 0; i<5; i++)
    {
      cin>>arr[i];
    }
    cout<<"reverse of enterd number is  :";
    for ( i=4; i>=0; i--)
    {
      cout<<arr[i];
    }*/



 int main()
{   
    int sizee;
     cout<<"enter the size of the number";
      cin>>sizee;
      if (sizee==1)
      {
        cout<<"not a valid size";
      }
      else
      {
                int arr[sizee],i;

           cout<<"enter the  "<<sizee<<" digit number";
      
          for ( i = 0; i<sizee; i++)
           {
               cin>>arr[i];
           }
                     cout<<"reverse of enterd number is  :";
                       for ( i=sizee-1; i>=0; i--)
                       {
                           cout<<arr[i];
                       }
      }
}