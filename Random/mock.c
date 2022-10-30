#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j, k,n=3;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 3*2* i; j++)
        {
            printf("*");
            if (j % (3 * i) == 0)
            {
                printf("\n");
            }
        }
        if (i == n)
            break;
        for (k = 1; k <= i; k++)
        {
            printf("*\n");
        }
    }
}