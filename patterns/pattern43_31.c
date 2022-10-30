#include<stdio.h>
void main()
{
    int i,j,n=8,k;
    k=n;
    for(i=1;i<2*n-1;i++)
    {
        if(i<n) 
            k--;
        else if(i==n)
            continue;
        else
            k++;
        for(j=1;j<=k;j++)
        {   
            printf("*");
        }
        printf("\n");
    }
}