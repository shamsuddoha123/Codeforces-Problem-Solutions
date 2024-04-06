#include<stdio.h>
int main()
{
    int t,n,i;
    int sum1,sum2;
    scanf("%d", &t);
    while(t--)
    {
        sum1=sum2=0;
        scanf("%d", &n);
        if(n%4!=0)
        {
            printf("NO\n");
        }
        else if(n%4==0)
        {
            printf("YES\n");
            for(i=2;i<=n;i+=2)
            {
                printf("%d ", i);
                sum1+=i;
            }
            for(i=1;i<=(n-3);i+=2)
            {
                printf("%d ", i);
                sum2+=i;
            }
            printf("%d\n", (sum1-sum2));
        }
    }
    return 0;
}