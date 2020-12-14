#include<iostream>
using namespace std;

int main()
{

  int i,j;

  int arr[3][4]={ {1,2,3,4}, {5,6,7,8},{9,10,11,12}};


  for( i = 0; i < 3; i++)
  {
    for( j = 0; j < 4; j++)
    {
        cout<<"elements in this 2d are :"<<arr[i][j]<<endl;
    }
         
   }
                
 return 0;
}