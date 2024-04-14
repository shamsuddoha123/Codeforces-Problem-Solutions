#include<stdio.h>
int main()
{
    int t,n,count;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        count=0;
        while(n%6==0)
        {
            count++;
            n/=6;
        }
        while(n!=1)
        {
            if(n%6!=0)
            {
                n*=2;
                count++;
                if(n%6!=0)
                {
                    printf("-1\n");
                    break;
                }
            }
            else
            {
                n/=6;
                count++;
            }
        }
        if(n==1)
        {
            printf("%d\n", count);
        }
    }
    return 0;
}