#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,n,count=0;
    scanf("%d %s", &n, str);
    for(i=0; i<n ;i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}