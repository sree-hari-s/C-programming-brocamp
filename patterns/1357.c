#include<stdio.h>
void main()
{
    int i,j,n=4,tot=0,m;
    for(i=1;i<=2*n;i++)
    {
        if(i<n)
        {    
            tot=2*i-1;
        }
        else if(i==n)
        {
            m = 2 * n - 1;
            continue;
        }
        else
        {
            tot=m;
            m -= 2;
        }
        for(j=1;j<=tot;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}