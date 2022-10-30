#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void check(int i, int j, int first, int last, int n)
{
    if (n >= 1)
    {
        if (i == first || i == last || j == first || j == last)
            printf("%d ", n);
        else
            check(i, j, first + 1, last - 1, n - 1);
    }
}
int main()
{
    int n;
    printf("Enter value:");
    scanf("%d", &n);
    int limit = 2 * n - 1;

    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            check(i, j, 0, limit - 1, n);
        }
        printf("\n");
    }
    return 0;
}