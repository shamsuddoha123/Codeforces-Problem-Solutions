#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("4 %d\n", (n-4));//Odd + even = odd, Odd + odd = even, Even + even = even
    }
    else
    {
        printf("9 %d\n", (n-9));
    }
    return 0;
}