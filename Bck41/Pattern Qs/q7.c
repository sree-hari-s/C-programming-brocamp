#include<stdio.h>
void main()
{
    int i,j,k,n=6,m=13;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=m;k++)
        {
            printf("*");
        }
        m-=2;
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}