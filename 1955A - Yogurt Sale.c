#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,a,b;
        int regularPrice,numOfPair,proPrice,minCost;
        scanf("%d %d %d", &n, &a, &b);
        regularPrice=n*a;
        numOfPair=n/2;
        proPrice=numOfPair*b+(n%2)*a;
        if(regularPrice<proPrice)
        {
            minCost=regularPrice;
        }
        else
        {
            minCost=proPrice;
        }
        printf("%d\n", minCost);
    }
    return 0;
}
