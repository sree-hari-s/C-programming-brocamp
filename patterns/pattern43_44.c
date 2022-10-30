#include<stdio.h>
void main()
{
    int i,j,k,n=4,tot=2*n+1,p=n+1;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=tot;j++)
        {
            printf("*");
            if(j%p==0)
            {    
                printf("\n");
            }
            if(j==tot)
                printf("\n");
        }  
        if(i==n)
            break;
        for(k=1;k<=3;k++)
        {
            printf("*\n");
        }
        tot=tot-2;
        p--;
    }
}