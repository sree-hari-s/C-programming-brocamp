#include<stdio.h>
void main()
{
    int i,j,n=6,tot=n;
    for(i=1;i<=2*n-1;i++)
    {   
        if(i<n)
            tot--;
        else if(i==n)
            continue;
        else
            tot++;
        for(j=1;j<=tot;j++)
        {
            if(j%2==0)
                printf("-");
            else
                printf("*");
        }
        printf("\n");
    }
}