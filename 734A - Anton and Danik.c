#include<stdio.h>
int main()
{
    char str[10000000];
    int n,i,A=0,D=0;
    scanf("%d %s", &n, str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='A')
        A++;
        else if(str[i]=='D')
        D++;
    }
    if(A>D)
    printf("Anton\n");
    else if(A<D)
    printf("Danik\n");
    else if(A==D)
    printf("Friendship\n");
    return 0;
}