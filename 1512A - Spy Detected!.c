#include<stdio.h>
int main()
{
    int t,n,i,arr[1000];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
        }
        if(arr[0]!=arr[1] && arr[0]!=arr[2])
        {
            printf("1\n");
        }
        else
        {
            for(i=1;i<n;i++)
            {
                if(arr[i]!=arr[0])
                {
                    printf("%d\n", i+1);
                    break;
                }
            }
        }
    }
    return 0;
}
