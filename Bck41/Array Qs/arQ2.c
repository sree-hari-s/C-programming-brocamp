#include <stdio.h>
void main()
{
    int i, j, n, a[100], temp;
    printf("Enter limit:");
    scanf("%d", &n);
    printf("Enter elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("$ ");
        }
        else
            printf("%d ",a[i]);
    }
}