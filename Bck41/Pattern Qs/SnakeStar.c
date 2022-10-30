#include <stdio.h>
void main()
{
    int i, j, n, counter = 1, reverse;
    printf("Enter number of rows:") ;   
    scanf("%d", &n);
    printf("Pattern:\n");
    for ( i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (j = 1; j <= 2 * i - 1; j++)
            {
                if (j % 2 == 0)
                {
                    printf("*");
                }
                else
                {
                    printf("%d", counter);
                    counter++;
                }
            }
        }
        else
        {
            reverse = i + counter - 1;
            for (j = 1; j <= 2 * i - 1; j++)
            {
                if (j % 2 == 0)
                {
                    printf("*");
                }
                else
                {
                    printf("%d", reverse--);
                    counter++;
                }
            }
        }
        printf("\n");
    }
}