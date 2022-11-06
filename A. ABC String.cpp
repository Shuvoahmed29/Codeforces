#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char a[51],b,c;
        cin>>a;
        long long int len,i,sum=1,sum1=1,sum2=0,m,f;
        len=strlen(a);
        b=a[0];
        c=a[len-1];
        if(b==c)
        {
            printf("NO\n");
        }
        else
        {
            for(i=1; i<len-1; i++)
            {
                if(b==a[i])
                {
                    sum=sum+1;
                }
                else if(c==a[i])
                {
                    sum1=sum1+1;
                }
                else
                {
                    sum2=sum2+1;
                }
            }
            m=(sum-sum1)-sum2;
            f=(sum-sum1)+sum2;
            if(m==0 || f==0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
