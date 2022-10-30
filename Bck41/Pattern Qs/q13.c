#include <stdio.h>
void main()
{
    int i, j, n = 5, k = 0;
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= 2 * n - 1; j++)
        {

            if (i + j < n + 1 || j - i >= n)
                printf("   ");
            else
            {
                j <= n ? k++ : k--;
                printf("%3d", k);
            }
        }
        printf("\n");
    }
}