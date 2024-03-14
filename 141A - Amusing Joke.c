#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000],str2[1000],str3[1000];
    int i,j,len1,len3,temp1,temp3;
    gets(str1);
    gets(str2);
    gets(str3);
    strcat(str1,str2);
    len1=strlen(str1);
    len3=strlen(str3);
    if(len1!=len3)
    {
        printf("NO\n");
    }
    else
    {
        for(i=0;i<(len1-1);i++)
        {
            for(j=i+1;j<len1;j++)
            {
                if(str1[i]>str1[j])
                {
                    temp1=str1[i];
                    str1[i]=str1[j];
                    str1[j]=temp1;
                }
            }
        }

        for(i=0;i<(len3-1);i++)
        {
            for(j=i+1;j<len3;j++)
            {
                if(str3[i]>str3[j])
                {
                    temp3=str3[i];
                    str3[i]=str3[j];
                    str3[j]=temp3;
                }
            }
        }

        if(strcmp(str1,str3)==0)
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