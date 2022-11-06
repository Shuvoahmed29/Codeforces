#include<stdio.h>
int main()
{
    char a[11],b[11];
    scanf("%s %s",a,b);
    printf("%s %s",a,b);
    printf("\n");
    int t,m=0;
    scanf("%d",&t);
    while(t--)
    {
        char c[11],d[11],e[11];
        scanf("%s %s",c,d);
        if(a==c)
        {
            printf("%s %s",b,d);
        }
        else if(a==d)
        {
            printf("%s %s",b,c);
        }
    }
    return 0;
}
