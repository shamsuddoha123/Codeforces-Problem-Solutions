#include<stdio.h>
int main()
{
    int i,n,m,flag=0;
    char str[1000];
    scanf("%d %d", &n, &m);
    while(n--)
    {
        for(i=0;i<m;i++)
        {
            scanf(" %c", &str[i]);
            if(str[i]=='W' || str[i]=='B' || str[i]=='G')
            {
                flag=1;
            }
            else if(str[i]=='C' || str[i]=='M' || str[i]=='Y')
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    if(flag==1)
    {
        printf("#Black&White\n");
    }
    else
    {
        printf("#Color\n");
    }
    return 0;
}