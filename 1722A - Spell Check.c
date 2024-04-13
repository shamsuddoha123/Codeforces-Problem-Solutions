#include<stdio.h>
int main()
{
    int t,i,n;
    int countT=0,countI=0,countM=0,countU=0,countR=0;
    char name[1000];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        scanf("%s", name);
        for(i=0;i<n;i++)
        {
            if(n==5)
            {
                if(name[i]=='T')
                {
                    countT++;
                }
                else if(name[i]=='i')
                {
                    countI++;
                }
                else if(name[i]=='m')
                {
                    countM++;
                }
                else if(name[i]=='u')
                {
                    countU++;
                }
                else if(name[i]=='r')
                {
                    countR++;
                }
            }
        }
        if(countT==1 && countI==1 && countM==1 && countU==1 && countR==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        countT=countI=countM=countU=countR=0;
    }
    return 0;
}