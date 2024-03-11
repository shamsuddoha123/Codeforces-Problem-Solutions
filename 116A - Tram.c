#include<stdio.h>
int main()
{
    int n,a,b,sum=0,count=0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &a, &b);
        sum-=a;
        sum+=b;
        if(sum>count)
        {
            count=sum;
        }
    }
    printf("%d\n", count);
    return 0;
}