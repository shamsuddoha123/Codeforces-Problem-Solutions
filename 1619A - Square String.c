#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,len;
    char str1[1000],str2[1000],str3[1000];
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        gets(str1);
        len=strlen(str1);
        if(len%2!=0)
        {
            printf("NO\n");
        }
        else
        {
            for(i=0;i<(len/2);i++)
            {
                str2[i]=str1[i];
            }
            str2[len/2]='\0';
            for(i=len/2;i<len;i++)
            {
                str3[i-len/2]=str1[i];
            }
            str3[len/2]='\0';
            if(strcmp(str2,str3)==0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}