//Write a program to separate prime and non-prime numbers in separate arrays.
#include <stdio.h>
#include <string.h>
void main()
{
    int i, j, array[100], limit, prime[100], nonPrime[100], k = 0, l = 0,count;
    printf("Enter limit:");
    scanf("%d", &limit);
    printf("Enter elements of array:\n");
    for (i = 0; i < limit; i++)
        scanf("%d", &array[i]);
    for (i = 0; i <limit; i++)
    {   
        count=0;
        for(j=1;j<=array[i];j++)
        {
            if(array[i]%j==0)
                count++;
        }
        if(count==2)
        {
            prime[l]=array[i];
            l++;
        }
        else
        {
            nonPrime[k]=array[i];
            k++;
        }
    }
    printf("Non Prime nos :\n");
    for (i = 0; i < k; i++)
        printf("%d ", nonPrime[i]);
    printf("\nPrime nos :\n");
    for (i = 0; i < l; i++)
        printf("%d ", prime[i]);
}