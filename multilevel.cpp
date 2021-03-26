#include<iostream>
using namespace std;
class GrandFather
{
    public:
    void display(){
    cout<<"im  Grandfather"<<endl;
    }
};
class Father:public GrandFather
{
    public:
    void displayy()
    {
        cout<<"um Father"<<endl;
    }

};
class child: public Father        
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