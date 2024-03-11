#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    int repeat[10000]={0};
    int i,len,count=0;
    gets(str);
    len=strlen(str);
    /*if(len<=3) 
    {
        printf("0");
        return 0;
    }  */  
    for(i=1;i<len;i+=3)
    {
        if (str[i] >= 'a' && str[i] <= 'z'){
        if(repeat[str[i]]==0) 
        {
            count++;
        }
        repeat[str[i]]=1;
        }
    }
    printf("%d", count);
}