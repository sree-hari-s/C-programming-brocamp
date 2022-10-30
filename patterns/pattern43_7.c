#include<stdio.h>
void main()
{
    int i,j,n=4,k;
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=2*i;j++)
        {
            printf("*");
            if(j%2==0)
                printf("\n");
        }
        if(i==n)
            break;
        for(k=1;k<=5*i;k++)
        {
            printf("*");
            if(k%(5*i)==0)
                printf("\n");
        }            
    }
}