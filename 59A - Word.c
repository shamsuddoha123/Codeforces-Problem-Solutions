#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int uprcount=0,lwrcount=0;
    int len,i;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            uprcount++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            lwrcount++;
        }
    }
    if(uprcount>lwrcount)
    {
        strupr(str);
    }
    else if(uprcount<=lwrcount)
    {
        strlwr(str);
    }
    puts(str);
    printf("\n");
    return 0;
}