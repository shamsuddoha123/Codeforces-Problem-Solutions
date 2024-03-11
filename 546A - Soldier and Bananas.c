#include<stdio.h>
int main()
{
  long long int k,n,w,dollar;
  scanf("%lld %lld %lld", &k, &n, &w);
  dollar=(k*((w*(w+1)))/2);
  if(dollar>n)
  {
    printf("%lld",(dollar-n));
  }
  else
  {
    printf("0\n");
  }
  return 0;
}
