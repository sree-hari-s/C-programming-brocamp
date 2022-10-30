#include<stdio.h>
void main()
{
    int i,j,n=5,space;
    for(i=1;i<=n;i++)
    {
        for(space=1;space<=i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=n-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}