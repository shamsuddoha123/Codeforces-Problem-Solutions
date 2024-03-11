#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,len;
    int one=0,zero=0,count=0;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='1')
        {
            one++;
            zero=0;
        }
        else
        {
            zero++;
            one=0;
        }
        if(one==7 || zero==7)
        {
            count=1;
            break;
        }
    }
    if(count==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
