#include <stdio.h>
#include <stdlib.h>
int quad(int a[], int n)
{
    int q;
    if (n % 2 == 0)
    {
        q = ((a[(n / 2) - 1] + a[n / 2]) / 2);
    }
    else
    {
        q = a[n / 2];
    }
    return q;
}
int main()
{
    int i, n, j, k, temp, mid;
    int q1, q2, q3;
    printf("Enter limit:");
    scanf("%d", &n);
    int a[n], quad1[n / 2], quad2[n / 2];
    printf("\nEnter elements of array:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    mid = n / 2;
    q2 = quad(a, n);

    for (i = 0, j = 0; i < mid; i++)
    {
        quad1[j] = a[i];
        j++;
    }
    q1 = quad(quad1, j);
    if(n%2!=0)
    {
        for (i = mid + 1, k = 0; i < n; i++)
        {
            quad2[k] = a[i];
            k++;    
        }
    }
    else
    {
        for (i = mid, k = 0; i < n; i++)
        {
            quad2[k] = a[i];
            k++;    
        }
    }
    q3 = quad(quad2, k);

    printf("\nquad1\n");
    for (i = 0; i < j; i++)
        printf("%d ", quad1[i]);
    printf("\nquad2\n");
    for (i = 0; i < k; i++)
        printf("%d ", quad2[i]);
    printf("\nQuad1:%d\nQuad2:%d\nQuad3:%d", q1, q2, q3);
    return 0;
}