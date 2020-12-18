#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"enter range of numbers between you want to find sum :"<<endl;
    cin>>n1;
    cout<<"enter second number :"<<endl ;
    cin>>n2;
    if (n1<n2)
    {
        int i,c,j,sum=0;
      for ( i = n1; i<=n2; i++)
     {
        c=0;
        for (j = 1; j<=i; j++)
        {
          if (i%j==0)
          {
            c++;
          }
        }
    
            if (c==2)
            {
             sum=sum+i;
           
            }
             
    
     }
     cout<<"sum of prime numbers is  :"<<sum<<endl;


    }
    else
    {
        cout<<"please enter valid range";
    }
    

}