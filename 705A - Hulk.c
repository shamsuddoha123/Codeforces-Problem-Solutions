#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("I hate");
        }
        if(i%2==0)
        {
            printf(" I love");
        }
        if(i!=n)
        {
            printf(" that ");
        }
        if(i==n)
        {
            printf(" it");
        }
    }
    return 0;
}