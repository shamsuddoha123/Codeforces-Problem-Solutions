#include<stdio.h>
int main()
{
    int arr[1000];
    int i,j,n;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(j=1;j<=n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]==j)
            {
                printf("%d ", i+1);
            }
        }
    }
    printf("\n");
    return 0;
}