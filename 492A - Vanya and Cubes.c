#include <stdio.h>
int main()
{
    int n,cube=0,height=0;
    scanf("%d", &n);
    while(n>(cube+height))
    {
        height++;
        cube+=height;
        n-=cube;
    }
    printf("%d\n", height);
    return 0;
}