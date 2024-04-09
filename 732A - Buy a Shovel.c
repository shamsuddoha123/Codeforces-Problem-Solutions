#include<stdio.h>
int main()
{
    int i,shovel,coin,sum=0;
    scanf("%d %d", &shovel, &coin);
    for(i=1;;i++)
    {
        sum+=shovel;
        if((sum%10==0) || (sum%10==coin))
        {
            printf("%d", i);
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}