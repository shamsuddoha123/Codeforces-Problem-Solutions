#include<stdio.h>
int main()
{
    long long int n,p;
    scanf("%lld", &n);
    if(n%5==0)
    {
        p=n/5;
    }
    else
    {
       p=(n/5)+1;
    }
    printf("%d\n",p);
    return 0;
}