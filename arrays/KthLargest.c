#include <stdio.h>
#include <limits.h>

int main()
{
    int i, j, limit, array[100], max, secondMax, k;
    max = INT_MIN;
    printf("Enter limit:");
    scanf("%d", &limit);
    printf("Enter elements of array:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the value of k:");
    scanf("%d", &k);
    for (i = 0; i < limit; i++)
    {
        if (array[i] >max)
            max = array[i];
    }

    for (j = 1; j < k; j++)
    {
        secondMax = INT_MIN;
        for (i = 0; i < limit; i++)
        {
            if (array[i] > secondMax && array[i] < max)
            {
                secondMax = array[i];
            }
        }
        max = secondMax;
    }
    printf("\nkth Largest element is %d", secondMax);
}