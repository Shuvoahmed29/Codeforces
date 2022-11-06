#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[15],b[15],c[15],d[15],e[15];
    int t;
    scanf("%s %s",a,b);
    scanf("%d",&t);
    cout<<a<<" "<<b<<endl;
    while(t--)
    {
        scanf("%s %s",c,d);
        if((strcmp(c,a)==0))
        {
            cout<<d<<" "<<b<<endl;
            strcpy(a,d);
        }
        else if((strcmp(c,b)==0))
        {
            cout<<a<<" "<<d<<endl;
            strcpy(b,d);
        }
    }
    return 0;
}
