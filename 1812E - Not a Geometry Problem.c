#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z;
    double result;
    scanf("%d %d %d", &x, &y, &z);
    result=sqrt(x*x+y*y+z*z);
    printf("%lf\n", result);
    return 0;
}