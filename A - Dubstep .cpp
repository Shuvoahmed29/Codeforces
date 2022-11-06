#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
int main()
{
    char A[201];
    int i,len;
    gets(A);
    len=strlen(A);
    for(i=0; i<len; i++)
    {
        if(A[i]=='W' && A[i+1]=='U' && A[i+2]=='B')
        {
            i=i+2;
            printf(" ");
        }
        else
        {
            printf("%c",A[i]);
        }
    }
    return 0;
}

