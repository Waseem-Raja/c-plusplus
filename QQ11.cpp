#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>
int shiftA(int a[], int aLen, int from)
{
    if ((from < 0 || from > aLen))
    {

        return -1;
    }
    int temp = a[aLen - 1];

    for (int i = aLen - 1; i > from; --i)
    {
        a[i] = a[i - 1];
    }
    // return the over flow
    return temp;
}
int insertt(int a1[], int a2[], int a3[], int size)
{
    int leftover = 0;
    for (int i = 0; i < size; i++)
    {
        if (a2[i] < i)
        {
            leftover = shiftA(a3, size, a2[i]);
            a3[a2[i]] = a1[i];
        }
        else if (a2[i] >= i)
        {
            a3[i] = a1[a2[i]];
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of your arrays :(Zero to exit)" << endl;
    cin >> size;
    if (size < 0)
    {
        cout << "Your input is invalid" << endl;
        cout << "Please Enter a positive number :(zero to exit)" << endl;
        main();
    }
    else if (size == 0)
    {
        exit(size);
    }
    else
    {
       
        int n;
        int a1[size], a2[size], a3[size];
        for (int i = 0; i < size; i++)
        {
            a1[i] = i;
        }
        for (int i = 0; i < size; i++)
        {   
        
            n = rand() % (i+1);
            a2[i] = n;
        }

        insertt(a1, a2, a3, size);
        cout << "INSERTED ARRAY   : ";
        cout << "[";
        for (int i = 0; i < size; i++)
        {
            if (i<size-1)
            {
             cout << a1[i] << ",";
            }
            else
            cout<<a1[i];
        }
        cout << "]";
        cout << endl;
        cout << "POSITIONED ARRAY : ";
        cout << "[";
        for (int i = 0; i < size; i++)
        {
             if (i<size-1)
            {
             cout << a2[i] << ",";
            }
            else
            cout<<a2[i];
        }
        cout << "]";
        cout << endl;
        cout << "GENERATED ARRAY  : ";
        cout << "[";
        for (int i = 0; i < size; ++i)
        {
           if (i<size-1)
            {
             cout << a3[i] << ",";
            }
            else
            cout<<a3[i];
        }
        cout << "]";
        cout<<endl;
        main();
    }
 }

// #include <iostream>

// int shiftA(int a[],int aLen, int from){
//     if ((from < 0 || from > aLen )){

//         return -1;
//     }
//     int temp = a[aLen-1];

//     for(int i = aLen - 1; i > from ; --i){
//         a[i] = a[i-1];
//     }
//     // return the over flow
//     return temp;

// }

// void insert(int a1[], int a2[], int a3[], int size){

//     int leftover = 0;
//     for (int i = 0; i < size; i++){
//         if (a2[i] < i){
//             leftover = shiftA(a3, size, a2[i]);
//             a3[a2[i]] = a1[i];
//         }else if (a2[i] >= i){
//             a3[i] = a1[a2[i]];
//         }
//     }

// }
// using namespace std;
// int main(){
//     int a1[5] = {0,1,2,3,4};
//     int a2[5]  = {0,1,2,2,1};
//     int a3[5];

//    // int leftOver = shiftA(a1, 5, 1, 4);

//     //std::cout <<  << std::endl;

//     insert(a1, a2, a3, 5);

//     for (int i = 0 ; i < 5; ++i){
//         cout<<a3[i]<<"\n";
//     }
//     return 0;
// }