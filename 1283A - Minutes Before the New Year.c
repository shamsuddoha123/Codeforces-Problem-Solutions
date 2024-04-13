#include<stdio.h>
int main()
{
    int t,h,m,min;
    scanf("%d", &t);
    while(t--)
    {
        min=0;
        scanf("%d %d", &h, &m);
        min=1440-((h*60)+m);
        printf("%d\n", min);
    }
    return 0;
}