#include<stdio.h>
int main()
{
    int year,d1,d2,d3,d4;
    scanf("%d", &year);
    while(1)
    {
        year++;
        d1=year%10;
        d2=(year/10)%10;
        d3=((year/10)/10)%10;
        d4=(((year/10)/10)/10)%10;
        if(d1!=d2 && d2!=d3 && d3!=d4 && d2!=d4 && d3!=d1 && d4!=d1)
        {
            break;
        }
    }
    printf("%d\n", year);
    return 0;
}