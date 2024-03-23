#include <stdio.h>
int main()
{
    int arr[10000];
    int i,j,n,m,x,temp,difference;
    scanf("%d %d", &n, &m);
    for(i=0;i<m;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<(m-1);i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    difference=arr[n-1]-arr[0];
    for(i=1;i<=(m-n);i++)
    {
        x=arr[i+n-1]-arr[i];
        if(x<=difference)
        {
            difference=x;
        }
    }
    printf ("%d\n", difference);
    return 0;
}
