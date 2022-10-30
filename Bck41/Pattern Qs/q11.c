#include<stdio.h>
void main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n;j++)
        {
            /* if(i+j<=n+1||j-i>=n)
                printf("*");
            else
                printf("$"); */
            if(j>=1+i && j<=2*n-i)
                printf("$");
            else 
                printf("*");
        }
        printf("\n");
    }
}