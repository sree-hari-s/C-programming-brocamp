#include <stdio.h>
void main()
{
    int i, j, n = 5, l = 1, k = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (k % 2 == 0)
            {
                printf(" %c ", l + 96);
            }
            else
            {
                printf(" %c ", l + 64);
            }
            k++;
            l++;
        }
        printf("\n");
    }
}