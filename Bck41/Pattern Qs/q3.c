#include<stdio.h>
void main()
{
    int i,j,k,n=3,m=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("*");
            
        }
        printf("\n");
        m+=2;
        for(k=1;k<=4*i;k++)
        {   
            if(k%2==0)
                printf("*");
            else
                printf("$");
            if(k%(4*i)==0)
                printf("\n");
        }
        
    }
}