#include<stdio.h>
void main()
{
    int i,j,n=3,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2;j++)
        {
            printf("**\n");
        }
        for(k=1;k<=5*i;k++)
        {
            printf("*");
            if(k%(5*i)==0)
                printf("\n");
        }
    }
}