#include<stdio.h>
void main()
{
    int i,j,k,n=3;
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
        for(k=1;k<=3*i;k++)
        {
            printf("*\n");
        }      
    }
}