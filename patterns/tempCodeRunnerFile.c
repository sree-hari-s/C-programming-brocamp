#include <stdio.h>
void main()
{
    int n = 9, i, j, k = 1;
    // printf("enter limit:");
    // scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        i < n / 2 ? k++ : k--;
        for (j = 1; j <= n; j++)
        {

            if (i == j || j == n - i + 1)
            {

                printf("%d", k);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}