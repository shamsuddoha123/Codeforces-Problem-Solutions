#include <stdio.h>
int main() 
{
    int arr[3],temp,i,j;
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
    printf("%d", (arr[2]-arr[1])+(arr[1]-arr[0]));
    return 0;
}  