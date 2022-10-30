#include <stdio.h>
void main()
{
    int i, j, array[100],b[100], limit, count,l=0;
    printf("Enter limit:");
    scanf("%d", &limit);
    printf("Enter elements of array:\n");
    for (i = 0; i < limit; i++)
        scanf("%d", &array[i]);
    for (i = 0; i < limit; i++)
    {
        count = 0;
        for (j = 1; j <= array[i]; j++)
        {
            if (array[i] % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            b[l]=array[i];
            l++; 
        }
    }
    b[l-1]=0;
    printf("Final array:\n");
    for(i=0;i<l;i++)
        printf("%d\t",b[i]);
}
