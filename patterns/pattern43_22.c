#include<stdio.h>
void main()
{
    int i,j,n=6,space,k;
    for(i=1;i<=n;i++)
    {   
        k=0;
        for(space=1;space<=i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=n-i;j++)
        {   
            k=k+i;
            printf("%2d",k);
        }    
        printf("\n");
    }
}