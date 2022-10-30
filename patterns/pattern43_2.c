#include<stdio.h>
void main()
{
    int i,j,k,n=4;
    for(i=1;i<=n;i++)
    {
        printf("*\n");
        for(j=1;j<=3*i;j++)
        {
            printf("*");
            if(j%3==0)
                printf("\n");
        }
    }
    /*
    for(i=1;i<=n;i++)
    {
        printf("*\n");
        for(j=1;j<=i;j++)
            printf("***\n");
    }
    */
}