#include<iostream>
using  namespace std;

int main(){
int i,j,k;
 int x[2][3][2] = 
    { 
        { {0,1}, {2,3}, {4,5} }, 
        { {6,7}, {8,9}, {10,11} } 
    }; 


    for ( i = 0; i < 2; i++)
    {
        for(j=0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                  cout << "Element at x[" << i << "][" << j 
                     << "][" << k << "] = " << x[i][j][k] 
                     << endl; 
            }
            
        }
        
    }
    

return 0;
}