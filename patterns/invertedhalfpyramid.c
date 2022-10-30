#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,k,space,limit;
    char ch;
    printf("Enter limit:");
    scanf("%d",&limit);
    for(i=limit;i>=1;i--)
    {   
        ch='A';
        for(space=limit-i;space>=1;space--)
        {
            printf(" ");
        }
        for(j=1;j<i;j++)
        {
            printf("%c ",ch++);
        }
          
        printf("\n");
    }
}