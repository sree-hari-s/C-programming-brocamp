#include <stdio.h>
#include <limits.h>
void main()
{
    int i, j, a[100], n, count, min, SecondMin, k;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter elements of a:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    SecondMin = INT_MAX;
    min = a[0];
    printf("Original Array:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                count++;
            }
        }
        if (count == 2 && a[i] < 7)
        {
            for (k = 0; k < n; k++)
            {
                if (a[i] < min)
                    min = a[i];
            }
            if (a[i] < SecondMin && a[i] > min)
            {
                SecondMin = a[i];
            }
        }
        else if(count==2 && a[i]>7)
        {
            for(k=i+1;k<n;k++)
            {
                if(a[i]==a[k])
                    a[i]=0;
            }
        }
    }
    printf("\nArray after replacing duplicate prime:\n");
    int sum=0;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
        sum+=a[i];
    }
    printf("\nSmallest Prime: %d\nSecond Smallest Prime: %d\nSum:%d",min, SecondMin,sum);
}