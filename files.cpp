#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char ch[100]="hello this my file program";
     char c;
    fp= fopen("trp.txt","w");
    
    fputs(ch,fp);  // writing to a file
   /* while (1)
    {
        c=fgetc(fp);   // reading from a file
         printf("%c",c);
 
        if (c==EOF)
        {
        break;
        }
                
    }*/
    
    fclose(fp);
       
    return 0;

   




}