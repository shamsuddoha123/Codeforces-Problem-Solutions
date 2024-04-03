#include<stdio.h>
int main()
{
    int n,i,point,best,worst,count=0;
    scanf("%d", &n);
    scanf("%d", &best);
    worst=best;
    for(i=1;i<n;i++)
    {
        scanf("%d", &point);
        if(point<worst)
        {
            worst=point;
            count++;
        }
        if(point>best)
        {
            best=point;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}