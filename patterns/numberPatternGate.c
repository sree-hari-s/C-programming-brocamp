#include<stdio.h>
void main()
{
    int i,j,n=6,k;
    for(i=1;i<=n;i++)
    {   
        k=0;
        for(j=1;j<=2*n-1;j++)
        {
            j<=n ? k++:k--;
            if(i+j<=n+1||j-i>=n-1)
                printf("%2d",k);
            else
                printf("  ");
        }
        printf("\n");
    }
}