//pointer to an array
#include<iostream>
using namespace std;

/*int main(){
     int are[6];
    int (*arr)[6];
    int *p;
    arr=&are;
    cout<<*p;
}*/
//pointer to pointers
int main()
{
int *p,**r, ***t;  // here comes the leveling of pointers 
              // level one pointer can be stored in level 2 only n so on
int x=8;
p=&x;
r=&p;  // level 2= level one
t=&p;  //it will show an error cox p is of level 1 and t is of level 3
t=&r;  // level 3= level 2

cout<<*r;

}
