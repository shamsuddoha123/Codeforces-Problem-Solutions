#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int count=0,i,len;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(count==0 && str[i]=='h')
        {
           count++;
        }
        else if(count==1 && str[i]=='e')
        {
           count++;
        }
        else if(count==2 && str[i]=='l')
        {
           count++;
        }
        else if(count==3 && str[i]=='l')
        {
           count++;
        }
        else if(count==4 && str[i]=='o')
        {
           count++;
        }
        if(count==5) 
        {
            break;
        }   

    }
    if(count==5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}