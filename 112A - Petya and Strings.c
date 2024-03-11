#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101];
    char str2[101];
    gets(str1);
    gets(str2);
    int d=stricmp(str1,str2);
    printf("%d", d);
    return 0;
}