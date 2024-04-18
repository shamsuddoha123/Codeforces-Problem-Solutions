#include<stdio.h>
int main()
{
    int x,n,i,num,result;
    scanf("%d", &x);
    while(x--)
    {
        scanf("%d", &n);
        int freq[200005]={0};
        for(i=0;i<n;i++)
        {
            scanf("%d", &num);
            freq[num]++;
        }
        result=-1;
        for(i=1;i<=n;i++)
        {
            if(freq[i]>=3)
            {
                result=i;
                break;
            }
        }
        printf("%d\n", result);
    }
    return 0;
}