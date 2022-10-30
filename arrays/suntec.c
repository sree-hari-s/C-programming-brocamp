#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j,l,diff = 0,greatest = 0,b;
    printf("Enter limit:");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter elements:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nArray:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        b = 1;
        for(j=0;j<n;j++)
        {
            if (pow(2, b) > a[i])
            {
                break;
            }
            else
            {
                b++;
            }
        }
        b--;
        diff = a[i] - pow(2, b);
        if (b > greatest)
        {
            greatest = b;
        }
        if (i + 1 == n)
        {
            break;
        }
        a[i + 1] += diff;
    }
    l = pow(2, greatest);
    printf("\nOutput:%d",l);
    return 0;
}