#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,len;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
        {
            printf("YES\n");
            return 0;
        }
    }    
    printf("NO\n");
    return 0;
}