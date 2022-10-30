#include<stdio.h>
void main()
{
    int i,j,n=5,tot=0;
    for(i=1;i<=2*n;i++)
    {
        if(i < n)
        {    
            tot=i ;   
        }
        else if(i==n)
            continue; 
        else    
            tot=2*n-i;
        for(j=1;j<=tot;j++)
        {
            printf("%2d",j);
        }
        printf("\n");
    }
}