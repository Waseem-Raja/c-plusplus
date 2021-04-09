#include <iostream>
#include <string.h>
using namespace std;

void EncryptUper(int key, char msg[])
{
    int length;

    length = strlen(msg);

    char ch;
    for (int i = 0; i < length; ++i)
    {
        ch = msg[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + key;
            if (ch > 'Z')
            {
                ch = ch - 'Z' + 'A' - 1;
            }
            msg[i] = ch;
        }
    }
    cout << "Encrypted message: " << msg << endl;
}

void DecryptUper(int key, char msg[])
{
    int length;
    length = strlen(msg);
    char h;
    for (int i = 0; i < length; ++i)
    {
        h = msg[i];
        if (h >= 'A' && h <= 'Z')
        {
            h = h - key;
            if (h < 'A')
            {
                h = h + 'Z' - 'A' + 1;
            }
            msg[i] = h;
        }
    }
    cout << "Decrypted message: " << msg << endl;
}

void EncryptLow(int key, char messag[])
{
    int length;

    length = strlen(messag);

    char ch;
    for (int i = 0; i < length; ++i)
    {
        ch = messag[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch + key;
            if (ch > 'z')
            {
                ch = ch - 'z' + 'a' - 1;
            }
            messag[i] = ch;
        }
    }
    cout << "Encrypted message: " << messag << endl;
}

void DecryptLow(int key, char messag[])
{
    int length;
    length = strlen(messag);
    char h;
    for (int i = 0; i < length; ++i)
    {
        h = messag[i];
        if (h >= 'a' && h <= 'z')
        {
            h = h - key;
            if (h < 'a')
            {
                h = h + 'z' - 'a' + 1;
            }
            messag[i] = h;
        }
    }
    cout << "Decrypted message: " << messag << endl;
}

int main()
{
    int choice;
    cout << "FOR UPPERCASE Enter 1 , FOR LOWERCASE Enter 2" << endl;
    cin >> choice;

    int key;
    switch (choice){
  
    case 1:

        char msg[100];
        cout << "Enter the message:"<<endl;
        cin>>msg;
        cout << "Enter key: ";
        cin >> key;
        EncryptUper(key, msg);
        DecryptUper(key, msg);
        break;
    case 2:

        char message[100];
        cout << "Enter the message:"<<endl;
        cin>>message;
        cout << "Enter key: ";
        cin >> key;
        EncryptLow(key, message);
        DecryptLow(key, message);
         break;
    default:
        cout << "enter correct choice" << endl;
  }
}