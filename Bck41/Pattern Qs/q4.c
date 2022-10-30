#include<stdio.h>
void main()
{
    int i,j,space,n=6;
    for(i=1;i<=n;i++)
    {
        for(space=i;space<=n;space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
                printf("$");
            else
                printf("*");
        }
        printf("\n");
    }
}