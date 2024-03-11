#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int t,len;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        gets(str);
        len=strlen(str);
        if(len>10)
        {
            printf("%c%d%c\n", str[0], (len-2), str[len-1]);
        }
        else
        {
           puts(str);
           printf("\n");
        }
    }
    return 0;
}