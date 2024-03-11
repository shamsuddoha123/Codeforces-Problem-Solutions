#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000],str2[1000];
    gets(str1);
    gets(str2);
    strrev(str1);
    int comp=strcmp(str1,str2);
    if(comp==0)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
    return 0;
}