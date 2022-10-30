#include<stdio.h>
void main()
{
    int i,j,n=4,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=4*i;j++)
        {    
            printf("*");
            if(j%(4*i)==0)
                printf("\n");
        }
        if(i==n)
            break;
        for(k=0;k<=i;k++)
            printf("*");
        printf("\n");    
}
}