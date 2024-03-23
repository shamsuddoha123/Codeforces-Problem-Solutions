#include<stdio.h>
int main()
{
    int t,n,i,j,temp,flag=0;
    int arr[1000];
    scanf("%d", &t);
    while(t--)
    {
        flag=0;
        scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
        }
        for(i=0;i<(n-1);i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(i=1;i<n;i++)
        {
            if((arr[i]-arr[i-1])>1)
            {
                flag=1;
                printf("NO\n");
            }
        }
        if(flag==0)
        {
            printf("YES\n");
        }
    }
    return 0;
}