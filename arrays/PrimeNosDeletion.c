
#include <stdio.h>

int main()
{

    int a[100] ;
    int n , count, i, j;
    printf("Enter limit:");
    scanf("%d", &n);
    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            for (j = i; j < n; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
            i--;
        }
    }
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
