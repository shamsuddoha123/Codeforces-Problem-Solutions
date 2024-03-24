#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char str[100];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", str);
        if((str[0]=='Y' || str[0]=='y' || str[0]=='E' || str[0]=='e' || str[0]=='S' || str[0]=='s') && (str[1]=='Y' || str[1]=='y' || str[1]=='E' || str[1]=='e' || str[1]=='S' || str[1]=='s') && (str[2]=='Y' || str[2]=='y' || str[2]=='E' || str[2]=='e' || str[2]=='S' || str[2]=='s'))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}