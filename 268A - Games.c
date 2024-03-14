#include<stdio.h>
int main()
{
    int arr1[1000],arr2[1000];
    int n,i,j,count=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr1[i]);
        scanf("%d", &arr2[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}