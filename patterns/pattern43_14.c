#include <stdio.h>
void main()
{
    int i, j, k, n = 3, x = 2, p = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= x; j++)
        {
            printf("*");
        }
        x = x * 2;
        printf("\n");
        for (k = 1; k <= p; k++)
        {
            printf("*\n");
        }
        p = p + 2;
    }
}