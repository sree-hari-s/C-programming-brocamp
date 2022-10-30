#include <stdio.h>
void main()
{
    int i, j, n, a[100], count = 0, sum = 0, ctr = 0;
    printf("Enter limit:");
    scanf("%d", &n);
    printf("Enter array elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j] && i != j)
            {
                count++;
            }
        }
        if (count == 0)
        {
            ctr++;
            sum += a[i];
        }
    }
    printf("\nCount:%d\nSum:%d", ctr, sum);
}