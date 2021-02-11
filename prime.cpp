/*#include <iostream>
using namespace std;
 
int main()
{
    int i,j,n;
    
    cout<<"Enter the number till which you want prime numbers"<<endl;
    cin>>n;
    
    cout<<"Prime numbers are :";    
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
         
       if(c==2)
        {
            cout<<i;
        }
    }
}*/
#include<iostream>
using namespace std;
int main()
{   int n;
   cout<<"enter the number"<<endl;
   cin>>n;
   int c=0;
   for (int i = 1; i <=n; i++)
   {
       if(n%i==0)
          c++;
       
   }
   if (c==2)
   {
       cout<<"number is prime";
   }
   else
   {
       cout<<"not prime";
   }
   
   
   


}