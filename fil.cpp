#include <iostream>
using namespace std;
#include <fstream>
#include <string.h>
#include <iomanip>
int main()
{
    int longestname = 0;
    string name[10];  //array to store the line on
    int sizenames[7]; //array to store the size
    int i = 0;
    int j;
    string line;
    ifstream fil;
    fil.open("hello.txt");

    while (!fil.eof()) //Runs while the file is NOT at the end
    {
        getline(fil, line); //Gets a single line from hello.txt
        name[i] = line;     //Q1, Saves the line in the name
        i++;
    }
    fil.close(); ////Closes the file

    for (j = 0; j <= 6; j++)
    {
        sizenames[j] = name[j].length(); //Q2   ,storing the sizes in sizenames array
        if (sizenames[j] > longestname)  //Q3   
            longestname = sizenames[j];
    }
    for (j = 0; j <= 6; j++) //Q4
    {
        cout << setw(longestname) << name[j] << setw(longestname) << "is" << setw(longestname) << sizenames[j] << "  charecters long" << endl;
        //setw() function  is used to set the field width  in output operations.
    }
    //cout<<longestname<<endl; //longest element will be 7
}

// int main()
// {
//     int longestname = 0;
//     string name[10];
//     int sizenames[10];
//     int i = 0;
//     // int j=0;
//     string line;
//     ifstream fil;
//     fil.open("hello.txt");

//     while (!fil.eof())
//     {
//         getline(fil, line);
//         name[i] = line;
//         i++;
//     }
//     fil.close();
//     int j = 0;
//     while (true)
//     {

//         sizenames[j] = name[j].length();
//         if (sizenames[j] == 0)
//         {

//             break;
//         }

//         if (sizenames[j] > longestname)
//             longestname = sizenames[j];

//         cout << setw(longestname) << name[j] << setw(longestname) << "is" << setw(longestname) << sizenames[j] << "  charecters long" << endl;
//           j++;
//     }
// }