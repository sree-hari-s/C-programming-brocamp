#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j, k, space, limit, ch = 65;
    printf("Enter limit:");
    scanf("%d", &limit);
    for (i = 1; i <= limit; i++)
    {
        for (space = limit - i; space >= 1; space--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c", ch);
            ch++;
        }
        ch--;
        for (k = i - 1; k >= 1; k--)
        {
            --ch;
            printf("%c", ch);
        }
        printf("\n");
        ch = 65;
    }
}
