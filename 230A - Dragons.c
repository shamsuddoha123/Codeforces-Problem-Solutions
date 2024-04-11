#include<stdio.h>
int main()
{
    int x[1000],y[1000];
    int s,n,i,j;
    int temp1,temp2,count=0;
    scanf("%d %d", &s, &n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                temp1=x[i];
                x[i]=x[j];
                x[j]=temp1;

                temp2=y[i];
                y[i]=y[j];
                y[j]=temp2;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(s>x[i])
        {
            count++;
            s=s+y[i];
        }
    }
    if(count==n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}