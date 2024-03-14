#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d %d", &n, &m);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=m;j++)
            {
                printf("#");
            }
            printf("\n");
        }
        else if(i%2==0 && i%4==0)
        {
            printf("#");
            for(j=2;j<=m;j++)
            {
                printf(".");
            }
            printf("\n");
        }
        else if(i%2==0 && i%4!=0)
        {
            for(j=1;j<=(m-1);j++)
            {
                printf(".");
            }
            printf("#");
            printf("\n");
        }
    }
    return 0;
}