#include <stdio.h>
int main()
{
    int t,hour,minute;
    char time[3];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d:%d", &hour, &minute);
        if(hour<12)
        {
            time[0]='A';
            time[1]='M';
        }
        else
        {
            time[0]='P';
            time[1]='M';
        }
        time[2]='\0';
        if(hour==0)
        {
            hour=12;
        }
        else if(hour>12)
        {
            hour-=12;
        }
        printf("%02d:%02d %s\n", hour, minute, time);
    }
    return 0;
}
