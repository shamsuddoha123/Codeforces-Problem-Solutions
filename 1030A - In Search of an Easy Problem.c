#include<stdio.h>
int main()
{
    int n,a,count=0,count1=0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &a);
        if(a==1)
        {
            count++;
        }
        else if(a==0)
        {
            count1++;
        }
    }
    if(count>=1)
    {
        printf("HARD\n");
    }
    else 
    {
        printf("EASY\n");
    }
    return 0;
}