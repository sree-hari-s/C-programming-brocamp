#include<stdio.h>
void main()
{
    int i,j,m=2,n=4,x=2;
    for(i=1;i<=n;i++)
    {
         for (j = 1; j <= x; j++)
            {
                printf("*");
            }
            x = x * 2;
            printf("\n");
           
    }    
}