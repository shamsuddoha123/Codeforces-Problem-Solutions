#include<stdio.h>
int main()
{
    long long int n,k,odd,even;
    scanf("%lld %lld", &n, &k);
    odd=(n+1)/2;
    even=n/2;
    if(k<=odd)
    {
        printf("%lld\n", 2*k-1);
    }
    else
    {
        printf("%lld\n", (k-odd)*2);
    }
    return 0;
}