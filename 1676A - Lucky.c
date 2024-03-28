#include<stdio.h>
int main()
{
    int arr[100];
    int i,t,sum1,sum2;
    scanf("%d", &t);
    while(t--)
    {
        for(i=0;i<6;i++)
        {
            scanf("%1d", &arr[i]);
        }
        sum1=arr[0]+arr[1]+arr[2];
        sum2=arr[3]+arr[4]+arr[5];
        if(sum1==sum2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        sum1=0;
        sum2=0;
    }
    return 0;
}