#include<stdio.h>
void main()
{
    int i,j,n=4,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=5*i;j++)
        {
            printf("*");
            if(j%(5*i)==0)
                printf("\n");
        }
        if(i==n)
            break;
        for(k=1;k<=i;k++)
            printf("*\n");    
    }
}