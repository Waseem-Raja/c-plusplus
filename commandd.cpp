#include<iostream>
using namespace std;

int main(int argc ,  char *argv[] )
{

        int i;
        cout<<"you have entered "<<argc<<" Arguments"<<endl;
        for ( i = 0; i < argc; i++)
        {
           cout<<argv[i]<<endl;

        }
        
return 0;


}