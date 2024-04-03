#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int duplicate[1000];
    int i,t,len;
    scanf("%d", &t);
    while(t--)
    {
        gets(str);
        len=strlen(str);
        printf("%c", str[0]);
        for(i=1;i<(len-1);i++)
        {
            if(duplicate[str[i]]==0)
            {
                printf("%c", str[i]);
            }
            duplicate[str[i]]=1;
        }
        printf("%c", str[len]);

    }
    return 0;
}