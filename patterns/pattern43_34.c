#include<stdio.h>
void main()
{
    int i,j,n=5,space;
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=2*n-1;j++)
        {
            if(i==j||i+j==2*n)
                printf("*");
            else    
                printf(" ");
        } 
        printf("\n");
    }
}