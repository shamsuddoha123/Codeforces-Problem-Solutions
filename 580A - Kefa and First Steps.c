#include<stdio.h>
int main()
{
    long long int i,n,a[100000],count=0,max=1;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]>=a[i-1])
        {
            count++;
            if(count>max)
            {
                max=count;
            }
        }    
        else
        {
            count=1;
        }
    }
    printf("%lld", max);
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int i,j,n,a[100000],count=1,max=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<n;j++)
    {
        if(a[j]>=a[j-1])
        {
            count++;
            if(count>max)
            {
                max=count;
            }
            else continue;
        }    
        else
        {
            count=1;
        }
    }
    printf("%d", max);
    return 0;
}
*/