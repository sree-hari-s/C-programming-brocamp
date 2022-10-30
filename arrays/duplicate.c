//duplicate elements count
#include <stdio.h>
int main()
{
    int arr[100], i, count=0, j,limit,flag;
    printf("Enter limit of array:");
    scanf("%d", &limit);
    printf("\nEnter elements:\n");
    for (i = 0; i < limit; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < limit; i++)
    {   
        flag=0;
        for (j = i+1; j < limit; j++)
        {
            if (arr[i] == arr[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            count++;
    }
    if (count > 0)
        {
            printf("Duplicate Elements count is %d \n", count);
        }
}