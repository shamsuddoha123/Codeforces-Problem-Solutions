#include<stdio.h>
int main()
{
    int arr[10000];
    int n,i,max=0,min=101,max_in,min_in;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
            max_in=i;
        }
        if(arr[i]<=min)
        {
            min=arr[i];
            min_in=i;
        }
    }
    if(max_in>min_in)
    {
        min_in++;
    }
    printf("%d", max_in+(n-1)-min_in);
    return 0;
}