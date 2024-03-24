#include<stdio.h>
int main()
{
    int arr[1000];
    int t,i,j,temp;
    scanf("%d", &t);
    while(t--)
    {
        for(i=0;i<3;i++)
        {
            scanf("%d", &arr[i]);
        }
        for(i=0;i<2;i++)
        {
            for(j=i+1;j<3;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        if((arr[0]+arr[1])==arr[2])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}