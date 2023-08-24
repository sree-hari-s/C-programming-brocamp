#include<stdio.h>
void main()
{
    int i,j,k,n=4,m=n,l;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*m;j++)
        {
            printf("*");
            if(j%m==0)
            {
                printf("\n");
            }   
        }
        m--;
        for(k=1;k<=i;k++)
        {
            printf("+\n");
        } 
    }
}