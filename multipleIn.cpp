#include<iostream>
using namespace std;
class father
{
    public:
    void display(){
    cout<<"im  father"<<endl;
    }
};
class Mother
{
    public:
    void displayy()
    {
        cout<<"um Mother"<<endl;
    }

};
class child: public father, public Mother        /*inheriting from two parent class's*/
{
    public:
    void disply()
    {
        cout<<"um child"<<endl;
    }
};
int main()
{
    child obj;
    obj.display();
    obj.displayy();
    obj.disply();
}