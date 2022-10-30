#include<stdio.h>
void main()
{
    int i,j,k,n=4;
    printf("*\n");
    for(i=1;i<=n;i++)
    {   

        for(k=1;k<=i*i;k++)
        {
            printf("*");
            if(k%i==0)
                printf("\n");
        }
        for(j=1;j<=3*i;j++)
        {
            if(j%2==0)
                printf("$");
            else
                printf("*");
        } 
        printf("\n");
    }
}