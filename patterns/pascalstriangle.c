#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,k,space,limit;
    printf("Enter limit:");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        for(space=1;space<=limit-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {              
            printf("%d",j);            
        }
        for(k=i-1;k>=1;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}
