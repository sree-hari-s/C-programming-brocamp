// Write a program to delete all duplicate elements from an array
#include <stdio.h>
int main()
{
    int arr[100], i, count = 0, j, limit, k;
    printf("Enter limit of array:");
    scanf("%d", &limit);
    printf("\nEnter elements:\n");
    for (i = 0; i < limit; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < limit; i++)
    {
        for (j = i + 1; j < limit; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < limit; k++)
                {
                    arr[k] = arr[k + 1];
                }
                j--;
                limit--;
            }
        }
    }
    printf("Array after deleting duplicates :\n");
    for (i = 0; i < limit; i++)
        printf("%d ", arr[i]);
}