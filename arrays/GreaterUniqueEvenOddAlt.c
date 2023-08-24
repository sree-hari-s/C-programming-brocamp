//Greater than 100 unique even else delete unique odd
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, n, k, j, sum = 0, array[100], count;
    printf("Enter the n : ");
    scanf("%d", &n);
    printf("Enter the array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    printf("Sum of Array: %d\nOriginal Array:\n",sum);
    for(i=0;i<n;i++)
        printf("%d\t",array[i]);
    if (sum > 100)
    {
        printf("\nArray after deleting unique odd no is \n");
        for (i = 0; i < n; i++)
        {
            count = 0;
            if (array[i] % 2 != 0)
            {
                for (j = 0; j < n; j++)
                {
                    if (array[i] == array[j])
                    {
                        count++;
                    }
                }
            }
            if (count == 1)
            {
                for (k = i; k < n; k++)
                {
                    array[k] = array[k + 1];
                }
                n--;
                i--;
            }
        }
    }
    else
    {
        printf("\nArray after deleting unique even no is \n");
        for (i = 0; i < n; i++)
        {
            count = 0;
            if (array[i] % 2 == 0)
            {
                for (j = 0; j < n; j++)
                {
                    if (array[i] == array[j])
                    {
                        count++;
                    }
                }
            }
            if (count == 1)
            {
                for (k = i; k < n; k++)
                {
                    array[k] = array[k + 1];
                }
                n--;
                i--;
            }
        }
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
}