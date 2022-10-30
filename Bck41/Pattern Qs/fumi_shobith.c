#include <stdio.h>
void main()
{
    int i, j, n = 10,k=1;
    for (i = 1; i <= n-1; i++)
    {
        if (i <= n/2)
        {
            k=i;
            for (j = 1; j <=2*i-1 ; j++)
            {
                printf("%2d",k);
                j<i ? k++:k--;
            }
        }
        if(i>=(n/2)+1)
        {   
            k=n-i;            
            for(j=1;j<=2*(n-1)-(2*i-1);j++)
            {
                printf("%2d",k);  
                j<n-i? k++:k--;
            }
        }
        printf("\n");
    }
}