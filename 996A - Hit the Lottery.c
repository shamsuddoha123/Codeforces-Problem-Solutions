#include<stdio.h>
int main()
{
    long long int n,sum=0;
    scanf("%lld", &n);
    sum+=(n/100);
    n%=100;
    sum+=(n/20);
    n%=20;
    sum+=(n/10);
    n%=10;
    sum+=(n/5);
    n%=5;
    sum+=(n/1);
    n%=1;
    printf("%lld", sum);
    return 0;
}