#include<stdio.h>
void main()
{
    int i,j,n=5,tot=0;
    for(i=1;i<=2*n-1;i++)
    {
        i<n ? tot++ : tot--;
        for(j=1;j<=tot;j++)
        {
            if(j%2==0)
                printf("^*");
            else
                printf("*");
        }
        printf("\n");
    }
}