#include<stdio.h>
#include<string.h>
int main()
{
    char str[250];
    int len,i;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='.')
        {
            printf("0");
        }
        if(str[i]=='-' && str[i+1]=='.')
        {
            printf("1");
            i++;
        }
        if(str[i]=='-' && str[i+1]=='-')
        {
            printf("2");
            i++;
        }
    }
    return 0;
}