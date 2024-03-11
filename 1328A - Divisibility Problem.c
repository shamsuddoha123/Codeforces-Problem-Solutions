#include<stdio.h>
int main() 
{
    int i,n,a,b,moves;
    scanf("%d", &n);
    for(i=0;i<n;i++) 
    {
        scanf("%d %d", &a, &b);
        if(a%b==0) 
        {
            printf("0\n");
        } 
        else 
        {
            moves=b-(a%b);
            printf("%d\n", moves);
        }
    }
    return 0;
}