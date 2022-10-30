#include <stdio.h>
void main()
{
    int n = 10, i, j, c = 65,k=1;

    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= n/2; j++,k++)
        {
            if (j >= i && i+j <= n  || i+j >= n && j <= i)
            {
                if (k % 2 != 0)
                    printf(" *");
                else
                    printf("%2c", c++);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
