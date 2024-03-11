#include<stdio.h>
int main() 
{
    int a,b,c;
    int op1,op2,op3,op4,op5,op6,max_val;
    scanf("%d %d %d", &a, &b, &c);
    op1=a+(b*c);
    op2=(a*b)+c;
    op3=a*(b+c);
    op4=a*b*c;
    op5=(a+b)*c;
    op6=a+b+c;
    max_val=op1;
    if(op2>max_val) max_val=op2;
    if(op3>max_val) max_val=op3;
    if(op4>max_val) max_val=op4;
    if(op5>max_val) max_val=op5;
    if(op6>max_val) max_val=op6;
    printf("%d\n", max_val);
    return 0;
}