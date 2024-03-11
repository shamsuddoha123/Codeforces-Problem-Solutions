#include<stdio.h>
#include<math.h>
int main()
{
    int mat[10][10];
    int i,j,moves=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            scanf("%d", &mat[i][j]);
        }
    } 
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(mat[i][j]==1)
            {
                moves=abs(3-i)+abs(3-j);
            }
        }
    } 
    printf("%d\n", moves);
    return 0;
}