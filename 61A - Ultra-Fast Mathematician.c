#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101],str2[101],result[101];
    int i,len;
    gets(str1);
    gets(str2);
    len=strlen(str1);
    for(i=0;i<len;i++)
    {
        if((str1[i]=='0' && str2[i]=='0') || (str1[i]=='1' && str2[i]=='1'))
        {
            result[i]='0';
        }
        else if((str1[i]=='0' && str2[i]=='1') || (str1[i]=='1' && str2[i]=='0'))
        {
            result[i]='1';
        }
    }
    result[len]='\0';
    puts(result);
    return 0;
}