#include<stdio.h>
int main()
{
    int n,i,j,temp,coin[1000];
    int sum=0,sumOfCoin=0,count=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &coin[i]);
        sum=sum+coin[i];
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(coin[i]<coin[j])
            {
                temp=coin[i];
                coin[i]=coin[j];
                coin[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        sumOfCoin+=coin[i];
        if(sumOfCoin>(sum/2))
        {
            count=i+1;
            printf("%d", count);
            break;
        }
    }
    return 0;
}