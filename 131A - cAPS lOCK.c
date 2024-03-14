#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[1000];
    int i,len,count=1;
    gets(str);
    len=strlen(str);
    for(i=1;i<len;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        count++;
    }
    if((str[0]>='a'&& str[0]<='z') && count==len)
    {
        strlwr(str);
        str[0]=toupper(str[0]);
        puts(str);
    }
    else if((str[0]>='A' && str[0]<='Z') && count==len)
    {
        strlwr(str);
        puts(str);
    }
    else 
    {
        puts(str);
    }    
    return 0;
}