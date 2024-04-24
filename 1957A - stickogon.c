#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int sticks[101]={0};
        for(int i=0;i<n;i++)
        {
            int length;
            scanf("%d", &length);
            sticks[length]++;
        }
        int polygons=0;
        for(int i=1;i<=100;i++)
        {
            polygons+=sticks[i]/3; // Update: we need at least three sticks to form a polygon
        }
        printf("%d\n", polygons);
    }
    return 0;
}