#include<stdio.h>
int main()
{
    int i,group,n,taxi=0,a=0,b=0,c=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &group);
        if(group==4) {taxi++;}
        else if(group==3) {a++;}
        else if(group==1) {b++;}
        else if(group==2) {c+=2;}
    }
    if(a>=b)
    {
        taxi+=a;
    }
    else if(b>a)
    {
        taxi+=a;
        c+=b-a;
    }
    if(c%4==0) {printf("%d",taxi+=c/4);}
    else {printf("%d",taxi+=(c/4)+1);}
    return 0;
}