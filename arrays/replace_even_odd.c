//Write a program to replace all Even numbers by 0 and Odd numbers by 1.
#include <stdio.h>
void main()
{
    int i, array[100], limit;
    printf("Enter limit:");
    scanf("%d", &limit);
    printf("Enter elements of array:\n");
    for (i = 0; i < limit; i++)
        scanf("%d", &array[i]);
    printf("\nArray before replacing:\n");
    for(i=0;i<limit;i++)
        printf("%d ",array[i]);
    for (i = 0; i < limit; i++)
    {
         if (array[i] % 2 == 0)
         {
             array[i]=0;
         }
         else
        {
             array[i]=1;
         }
    }
    printf("\nArray after replacing:\n");
    for(i=0;i<limit;i++)
        printf("%d ",array[i]);
}