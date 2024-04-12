#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        int swaps;
        char cards[4];
        gets(cards);
        //Count the number of swaps needed to transform the row into "abc"
        swaps=(cards[0]!='a')+(cards[1]!='b')+(cards[2]!='c');//Consider the input: "bac".So, 1(true)+1(true)+0(false)=2
                                                               //So, swaps will be 2 in this case.
        //If the number of swaps needed is 0 or 2, it's possible with one operation, otherwise not
        if(swaps==0 || swaps==2)
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