#include<stdio.h>
int main()
{
    int n,X=0;
    char s[4];
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", s);
        if(s[0]=='+' && s[1]=='+' && s[2]=='X')
        {
            ++X;
        }
        else if(s[0]=='X' && s[1]=='+' && s[2]=='+')
        {
            X++;
        }
        else if(s[0]=='-' && s[1]=='-' && s[2]=='X')
        {
            --X;
        }
        else if(s[0]=='X' && s[1]=='-' && s[2]=='-')
        {
            X--;
        }
    }
    printf("%d\n", X);
    return 0;
}