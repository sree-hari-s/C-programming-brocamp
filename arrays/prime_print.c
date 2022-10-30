// Write a program to print all prime numbers in an array
#include <stdio.h>
#include<math.h>
void main()
{
    int i, j, a[100], n, count;
    printf("Enter limit:");
    scanf("%d", &n);
    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
            count++;
            }
        }
        if(count==2)
        {
            printf("Prime nos are %d\n",a[i]);
        }
    } 
}

