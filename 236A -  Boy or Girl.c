#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    int len,count=0,i,j,flag;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        flag=0;
        for(j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            count++;
        } 
    }
    if(count%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else if(count%2!=0)
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}