#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    if(a>=b)
    {
        a=a-b;
        a=a/2;
        printf("%d %d", b, a);
    }
    else
    {
        b=b-a;
        b=b/2;
        printf("%d %d", a, b);
    }
    return 0;
}