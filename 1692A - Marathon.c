#include<stdio.h>
int main()
{
    int arr[1000];
    int t,i,count=0,flag;
    scanf("%d", &t);
    while(t--)
    {
        for(i=0;i<4;i++)
        {
            scanf("%d", &arr[i]);
        }
        count=0;
        for(i=1;i<4;i++)
        {
            if(arr[0]<arr[i])
            {
                count++;
                flag=1;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}