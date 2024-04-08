#include<stdio.h>
int main()
{
    int t,a,b;
    int countM=0,countC=0;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &a, &b);
        if(a<b)
        {
            countC++;
        }
        else if(a>b)
        {
            countM++;
        }
    }
    if(countM>countC)
    {
        printf("Mishka\n");
    }
    else if(countC>countM)
    {
        printf("Chris\n");
    }
    else if(countM==countC)
    {
        printf("Friendship is magic!^^\n");
    }
    return 0;
}