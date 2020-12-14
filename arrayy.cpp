#include<iostream>
using namespace std;

int main(){

int i;
/*
//simple array program
    int arr[5]={17,28,9,4,8};      //Decleration, Intialization
    for ( i = 0; i < 5; i++)         //traversing the array 
    {
      cout<<"elements in array are: "<<arr[i]<<endl;   // printing all elements  
    }
*/
//taking input from user through arrays
int arr[5];
for ( i = 0; i < 5; i++)     
{
    cout<<"enter the elements"<<endl;
    cin>>arr[i]; // taking elements from user 
}

for ( i = 0; i < 6; i++)
{
    cout<<"you entered: "<<arr[i]<<endl;  // printing out the elements entered by the user
}






}