#include<stdio.h>
int main()
{
    int n,h,a,sum=0;
    scanf("%d %d", &n, &h);
    while(n--)
    {
        scanf("%d", &a);
        if(a>h)
        {
            sum=sum+2;
        }
        else if(a<=h)
        {
            sum++;
        }
    }
    printf("%d\n", sum);
    return 0;
}