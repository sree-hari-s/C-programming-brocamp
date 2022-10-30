#include <stdio.h>
void main()
{
    int i, j, n, counter = 1, reverse;
    printf("Enter number of rows:");
    scanf("%d", &n);
    printf("Pattern:\n");
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <=i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%d", counter);
            }
            else
            {
                reverse = i + counter - 1;
                printf("%d", reverse--);
            }
            counter++;
        }

        printf("\n");
    }
}