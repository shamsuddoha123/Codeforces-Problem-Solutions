#include<stdio.h>
int main()
{
    long long int n,i,arr[1000000],group=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
    scanf("%lld",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            group++;
        }
    }
    printf("%lld\n",group);
    return 0;
}