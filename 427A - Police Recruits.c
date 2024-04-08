#include<stdio.h>
int main()
{
    int n,i,event;
    int police=0,crime=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &event);
        if(event==-1)
        {
            if(police>0)
            {
                police--;
            }
            else
            {
                crime++;
            }
        }
        else
        {
            police+=event;
        }
    }
    printf("%d", crime);
    return 0;
}