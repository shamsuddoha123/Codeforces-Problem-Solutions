#include<stdio.h>
int main()
{
    int t,a,b,temp,result;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &a, &b);
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        result=a*2;
        if(result<b)
        {
            result=b;
        }
        printf("%d\n", result*result);
    }
    return 0;
}
