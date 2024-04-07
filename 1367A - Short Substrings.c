#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,t,len;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", str);
        len=strlen(str);
        printf("%c", str[0]);
        for(i=1;i<(len-1);i+=2)
        {
            if(str[i]==str[i+1])
            {
                printf("%c", str[i]);
            }
        }
        printf("%c", str[len-1]);
        printf("\n");
    }
    return 0;
}
