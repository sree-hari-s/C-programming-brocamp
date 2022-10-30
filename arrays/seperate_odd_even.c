// Write a program to separate odd and even numbers in separate arrays
#include <stdio.h>
void main()
{
    int i, array[100], limit, odd[100], even[100], k = 0, l = 0;
    printf("Enter limit:");
    scanf("%d", &limit);
    printf("Enter elements of array:\n");
    for (i = 0; i < limit; i++)
        scanf("%d", &array[i]);
     printf("\nEven nos :\n");
    for (i = 0; i < limit; i++)
    {
        if (array[i] % 2 == 0)
        {
            even[k] = array[i];
            printf("%d ",even[k]);
            k++;
        }      
    }
    printf("\nOdd nos :\n");
    for (i = 0; i < limit; i++)
    {
        if(array[i]%2!=0)
        {
            odd[l] = array[i];
            printf("%d ", odd[l]);
            l++;
        }
    }         
}
/*// Write a program to separate odd and even numbers in separate arrays
#include <stdio.h>
#include <string.h>
void main()
{
    int i, j, array[100], limit, odd[100], even[100], k = 0, l = 0;
    printf("Enter limit:");
    scanf("%d", &limit);
    printf("Enter elements of array:\n");
    for (i = 0; i < limit; i++)
        scanf("%d", &array[i]);
    for (i = 0; i < limit; i++)
    {

        if (array[i] % 2 == 0)
        {
            even[k] = array[i];
            k++;
        }
        else
        {
            odd[l] = array[i];
            l++;
        }
    }
    printf("Odd nos :\n");
    for (i = 0; i < l; i++)
        printf("%d ", odd[i]);
    printf("\nEven nos :\n");
    for (i = 0; i < k; i++)
        printf("%d ", even[i]);
}
*/