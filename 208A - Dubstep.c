#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char str[1000];
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            i+=2;
            printf(" ");
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}