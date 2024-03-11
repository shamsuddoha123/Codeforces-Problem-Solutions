#include<stdio.h>
int main()
{
    long long int n,k;
    int digit;
    scanf("%lld %lld", &n, &k);
    while(k--)
    {
        digit=n%10;
        if(digit!=0)
        {
            n-=1;
        }
        else if(digit==0)
        {
            n/=10;
        }
    }
    printf("%lld\n", n);
    return 0;
}