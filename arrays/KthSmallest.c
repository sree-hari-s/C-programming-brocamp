#include <stdio.h>
#include <limits.h>

int main()
{
    int i, j, limit, array[100], min, secondMin, k, max = INT_MIN;
    min = INT_MAX;
    printf("Enter limit:");
    scanf("%d", &limit);
    printf("Enter elements of array:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the value of k:");
    scanf("%d", &k);
    if (k == 1)
    {
        for (i = 0; i < limit; i++)
        {
            if (array[i] < min)
                min = array[i];
        }
        printf("Kth Smallest element is %d", min);
    }
    else if (k == limit)
    {
        for (i = 0; i < limit; i++)
        {
            if (array[i] > max)
                max = array[i];
        }
        printf("Kth Smallest element is %d", max);
    }
    else
    {
        for (i = 0; i < limit; i++)
        {
            if (array[i] < min)
                min = array[i];
        }

        for (j = 1; j < k; j++)
        {
            secondMin = INT_MAX;
            for (i = 1; i < limit; i++)
            {
                if (array[i] < secondMin && array[i] > min)
                {
                    secondMin = array[i];
                }
            }
            min = secondMin;
        }
        printf("\nkth Smallest element is %d", secondMin);
    }
}