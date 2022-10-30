// Write a program to print all negative elements in an array
#include <stdio.h>
void main()
{
    int i, j, array[100], limit;
    printf("Enter limit:");
    scanf("%d", &limit);
    printf("Enter elements of array:\n");
    for (i = 0; i < limit; i++)
        scanf("%d", &array[i]);
    printf("Negative elements in array:\n");
    for (i = 0; i <limit; i++)
    {   
        if(array[i]<0)
            printf("%d ",array[i]);
    }
}