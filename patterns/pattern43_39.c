#include<stdio.h>
void main()
{
    int i,j,n=7;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==n||j==n||i==1||j==1||i==j||i+j==n+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}