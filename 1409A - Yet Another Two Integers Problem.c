#include<stdio.h>
#include<math.h>
int main()
{
    int t,a,b;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &a, &b);
        if(a==b)
        {
            printf("0\n");
        }
        else
        {

            if((abs(a-b)%10)==0)
            {
                printf("%d\n", (abs(a-b))/10);
            }
            else
            {
                printf("%d\n", ((abs(a-b))/10)+1);
            }
        }
    }
    return 0;
}