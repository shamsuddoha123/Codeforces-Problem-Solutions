#include <stdio.h>
#include <math.h>
int main()
{
    int n, t, i, flag = 1;

    scanf("%d", &t);
    while (t--)
    {
        flag=1;
        scanf("%d", &n);
        for (i = 2; i <= sqrt(n); i++)
        {
            if ((sqrt(n)) % i != 0 )
            {
                flag = 1;
            }else
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}