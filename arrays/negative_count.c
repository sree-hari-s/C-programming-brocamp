// Write a program to count the total number of negative elements in an array.
#include <stdio.h>
void main()
{
    int i, j, array[100], limit,count=0;
    printf("Enter limit:");
    scanf("%d", &limit);
    printf("Enter elements of array:");
    for (i = 0; i < limit; i++)
        scanf("%d", &array[i]);
    printf("\nNegative elements in array:");
    for (i = 0; i <limit; i++)
    {   
        if(array[i]<0)
        {   
            count++; 
            printf("%d ",array[i]);
        }
    }
    printf("\nNegative elements count :%d\n",count);
}