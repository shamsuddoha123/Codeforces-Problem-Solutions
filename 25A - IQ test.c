#include<stdio.h>
int main()
{
    int arr[1000];
    int n,i,even=0,odd=0,evenPosition,oddPosition;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]%2==0)
        {
            even++;
            evenPosition=i;
        }
        else
        {
            odd++;
            oddPosition=i;
        }
    }
    if(even<odd)
    {
        printf("%d", evenPosition);
    }
    else
    {
        printf("%d", oddPosition);
    }

}