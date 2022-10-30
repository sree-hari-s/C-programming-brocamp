//Write a program to print the array by skipping two values next to the multiples of 5.
#include <stdio.h>
void main()
{
    int i, j, n, a[100];
    printf("Enter limit:");
    scanf("%d", &n);
    printf("Enter array elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%5==0)
        {
            if(i==n-1)
                n=n;
            else if(i==n-2)
                n=n-1;
            else
            {
                for(j=i;j<n;j++)
                {
                    a[j+1]=a[j+3];
                    a[j+2]=a[j+4];
                }
                n-=2;
            }
        }
    }
        printf("Array after deletion:\n");
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
}