#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j, l, k, n, array[100], count,d;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter the array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Original array\n");
    for (l = 0; l < i; l++)
    {
        printf("%3d", array[l]);
    }
    for (i = 0; i < n; i++)
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
            for(d=0;d<2;d++)
            {
                for (l = i; l <= n; l++)
                {
                    array[l + 1] = array[l + 2];
                }
                n--;
            }
        }
    }
    n=l;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=array[i];j++)
        {   
            count=0;
            if(array[i]==array[j])
            {

            }
        }
    }
    printf("\nArray is %d:\n ",n);
    for (i = 0; i < n; i++)
    {
        printf("%3d", array[i]);
    }
}