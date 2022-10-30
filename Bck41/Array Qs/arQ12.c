//Write a program to find the sum of array elements except prime numbers
#include <stdio.h>
void main()
{
    int i, j, n, a[100],count=0,sum=0;
    printf("Enter limit:");
    scanf("%d", &n);
    printf("Enter array elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i=0;i<n;i++)
    {   
        count=0;
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
                count++;
        }
        if(count!=2)
        {
            sum+=a[i];
        }
    }
    printf("Sum :%d",sum);
}