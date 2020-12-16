#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1= "hello this is the string program"; // dynamic allocation of memory not static as in arrays
    string s2= "oh really";
    /*
    cout<<s1<<endl;

    string s2= "ok so what";

    string s3= s1+s2; // concatenation of two strings
    cout<<s3<<endl;*/

    int l=s1.length(); // checks the length of a string 
    cout<<l<<endl;  
     string sub= s1.substr(3,9); // printing sub string of s1 string using substr function here 3 is starting index and 9 is how many charecters
     cout<<sub<<endl;

     s1.swap(s2); // swapping s1 to s2
     cout<<s1<<endl;
     cout<<s2<<endl;

     cout<<s1.at(5)<<endl;
     cout<<s1.replace(3,8,"replacing")<<endl; //3 means from which index n 8 means no. of charecters and then replacing string
     

    int f=s2.find("program");
    cout<<"found at : "<<f;

  //there are so many more functions 
    
}
