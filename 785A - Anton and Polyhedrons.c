#include<stdio.h>
int main()
{
    char str[10000];
    int n,sum=0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", str);
        if(str[0]=='T')
        {
            sum+=4;
        }
        else if(str[0]=='C')
        {
            sum+=6;
        }
        else if(str[0]=='O')
        {
            sum+=8;
        }
        else if(str[0]=='D')
        {
            sum+=12;
        }
        else if(str[0]=='I')
        {
            sum+=20;
        }
    }
    printf("%d", sum);
    return 0;
}