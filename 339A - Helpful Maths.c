#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    int i,j,n,temp;
    gets(str);
    n=strlen(str);
    for(i=0;i<(n-1);i+=2)
    {
        for(j=(i+2);j<n;j+=2)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    puts(str);
    printf("\n");
    return 0;
}