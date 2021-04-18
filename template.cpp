#include<iostream>
using namespace std;

template<typename T>
T add(T x, T y)
{
    T z=x+y;
    return z;
}
int main()
{
  int r=3, i=7;
  cout<<add<int>(2.4,4)<<endl;
  cout<< add<float>(2.4,4);



}

