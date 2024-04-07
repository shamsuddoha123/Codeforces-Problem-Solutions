#include<stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np;
    int totalDrink,min,i,toast,arr[3];
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    totalDrink=k*l;
    arr[0]=totalDrink/nl;
    arr[1]=c*d;
    arr[2]=p/np;
    min=arr[0];
    for(i=1;i<3;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    toast=min/n;
    printf("%d\n",toast);
    return 0;
}