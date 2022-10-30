#include<stdio.h>
void main()
{
    int i,j,k,n=3,tot=3;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=tot;j++)
        {
            for(k=1;k<=j;k++)
            {
                printf("X");
            }  
            printf("\n");  
        }
        tot++;
    }
}