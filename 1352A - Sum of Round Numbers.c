#include<stdio.h>
int main() 
{
    int t,n,digit,count,divisor,values[1000],i;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        count=0;
        divisor=1;
        while(n>0) 
        {
            digit=n%10;
            if(digit!=0) 
            {
                values[count++]=digit*divisor;
            }
            n/=10;
            divisor*=10;
        }
        printf("%d ", count);
        for(i=0;i<count; i++) 
        {
            printf("%d ", values[i]);
        }
        printf("\n");
    }
    return 0;
}
