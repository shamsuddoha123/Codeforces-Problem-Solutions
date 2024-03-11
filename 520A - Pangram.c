#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int n,i,len,count=0;
    int repeat[2000]={0};
    scanf("%d", &n);
    getchar();
    for(i=0;i<n;i++) 
    {
        scanf("%c", &str[i]);
    }
    str[i]='\0';
    strlwr(str);
    len=strlen(str);
    for (i=0;i<len;i++) 
    {
        if(repeat[str[i]]==0) 
        {
            count++;
        }
        repeat[str[i]]=1;
    }
    if(count>=26) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }
    return 0;
}