#include<stdio.h>
void main()
{
    int i,j,n=5,space;
    for(i=1;i<=n;i++)
    {
        for(space=1;space<=n-i;space++)
            printf(" ");
        for(j=1;j<=n;j++)
        {   
            if(i==1||i==n||j==n||j==1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}