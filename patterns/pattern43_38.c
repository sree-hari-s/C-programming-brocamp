#include<stdio.h>
void main()
{
    int i,j,k,n=5,tot=0;
    for(i=1;i<=n;i++)
    {   
        for(j=tot;j<2*n;j++)
        {
            printf("*");
        }
        tot=tot+2;
        printf("\n");
        for(k=1;k<=i;k++)
        {
            printf("*\n");
        }
    }
}