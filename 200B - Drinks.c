#include<stdio.h>
int main()
{
    int n,a,i;
    int sum=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("%Lf\n",(long double) sum/n);
    return 0;
}