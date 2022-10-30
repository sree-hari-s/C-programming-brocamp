#include<stdio.h>
void main()
{
    int i,j,k,n=4;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i;j++)
        {
            printf("*");
            if(j%(2*i)==0)
                printf("\n");
        }
        for(k=1;k<=4*i;k++)
        {
            if(k%2==0)
                printf("-");
            else
                printf("*");
            if(k%(4*i)==0)
                printf("\n");
        }
    }
}