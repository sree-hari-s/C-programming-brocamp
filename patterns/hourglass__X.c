#include <stdio.h>
void main()
{
    int n, i, j, k = 0;
    printf("enter limit:");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        i <=((n / 2)+1) ? k++ : k--;
        for (j = 1; j <= n; j++)
        {
            if (i == j || i+j == n + 1||i==1||i==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}