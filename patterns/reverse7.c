#include <stdio.h>
void main()
{
    int i, j, n = 5, tot = 0, k = 1, m=10;
    for (i = 1; i < 2 * n; i++)
    {
        if (i <= n)
        {
            for (j = 1; j < i; j++)
            {
                printf("%4d", 3 * k);
                k++;
            }
        }
        if(i>n)
        {
            for (j = 1; j <= 2*n - i; j++)
            {
                 
                    printf("%4d", 7 * m);
                    m--;
                
            }
        }
        printf("\n");
    }
}