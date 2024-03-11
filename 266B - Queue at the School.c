#include<stdio.h>
int main()
{
    char str[1000];
    int time,n,i;
    scanf("%d %d %s", &n, &time, str);
    while(time--)
    {
        for(i=0;i<n;i++)
        {
            if(str[i]=='B' && str[i+1]=='G')
            {
                str[i]='G';
                str[i+1]='B';
                i++;
            }
        }
    }
    puts(str);
    printf("\n");
    return 0;
}