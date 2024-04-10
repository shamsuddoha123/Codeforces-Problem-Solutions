#include<stdio.h>
int main()
{
    int i,j,t,temp,arr[3];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
        for(i=0;i<2;i++)
        {
            for(j=1;j<3;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        printf("%d\n", arr[1]);
    }
    return 0;
}