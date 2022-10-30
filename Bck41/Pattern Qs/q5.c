#include<stdio.h>
void main()
{
    int i,j,space,n=6;
    for(i=1;i<=n;i++)
    {
        for(space=1;space<=i;space++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            if(i%2==0)
                printf("*");
            else
                printf("$");
        }
        printf("\n");        
    }
}