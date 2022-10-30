#include<stdio.h>
void main()
{
    int i,j,k,n=3,m=1;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3*m*i;j++)
        {
            printf("*");
            if(j%(3*m)==0)
                printf("\n");
        }
        m++;
        if(i==n)
            break;
        for(k=1;k<=3;k++)
        {
            printf("*\n");
        }
    }
}