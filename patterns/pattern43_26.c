#include<stdio.h>
void main()
{
    int i,j,n=5,k;
    for(i=1;i<=(2*n-1);i++)
    {   
        i<=n ? k++:k--;
        for(j=1;j<=2*n-1;j++)
        {
            if(j==(n+1)-k||j==(n-1)+k)
                printf("*");
            else
                printf(" ");    
        }   
        printf("\n");
    }
}
