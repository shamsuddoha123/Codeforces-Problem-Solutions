#include<stdio.h>
int main()
{
    long long int n,sum=0;
    scanf("%lld", &n);
    if(n%2==0)
    {
        sum=n/2;
    }
    else 
    {
        sum=-(n+1)/2;
    }
    printf("%lld", sum);
    return 0;
}