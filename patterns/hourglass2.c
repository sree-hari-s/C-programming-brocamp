#include <stdio.h>
void main()
{
    int n = 5, i, j,tot=0,k=1; 
       printf("enter limit:");
       scanf("%d",&n); 
    for (i = 1; i <2*n; i++)
    {
        i<=n ? tot++:tot--;
        for (j = 1; j <= n; j++)
        {
            if(j>=tot)
                printf("%4d",k++);
            else
                printf("  ");
        }
        printf("\n");
    }
}