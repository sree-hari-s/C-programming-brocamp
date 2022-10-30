#include<stdio.h>
void main()
{
    int i,j,n=7,k;
    for(i=1;i<=n;i++)
    {   
        k=1;
        for(j=1;j<2*n;j++)
        {
            if(i+j<=n+1||j-i>=n-1)
            {   
                if(j<n)
                    printf("%2d",k++);
                else if(j==n)
                    printf("%2d",k);
                else
                    printf("%2d",--k);
            }
            else   
                printf("  ");
        }
        printf("\n");
    }
}