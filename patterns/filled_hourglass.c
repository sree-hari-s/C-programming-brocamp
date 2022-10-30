#include<stdio.h>
void main()
{
    int n,i,j,space;
    printf("enter limit:");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        for(space = i; space <= n; space++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    for ( i = n-1; i >= 1; i--)
    {
        for ( j = 1; j < i; j++)
        {
            printf(" ");
        }
    for ( space = i; space <= n; space++)
    {
        printf("* ");
    }
    printf("\n");
    }
}
    