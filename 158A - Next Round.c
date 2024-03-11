#include<stdio.h>
int main()
{
    int n,k,arr[100],count=0;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>=arr[k] && arr[i]>0)
        count++;
    }
    printf("%d",count);
    return 0;
}