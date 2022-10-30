#include <stdio.h>
int main()
{
    int i, j, n, a[100], first, last, temp, count = 0, k;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                count++;
            for (k = 0; k < n; k++)
            {
                printf("%d ", a[k]);
            }
            printf("\n");
            }
        }
    }
    printf("Array is sorted in %d swaps.\n", count);
    printf("First ELement: %d\n", a[0]);
    printf("Last Element: %d\n", a[n - 1]);
    return 0;
}