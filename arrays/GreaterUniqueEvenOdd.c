//Greater than 100 unique even else delete unique odd
#include <stdio.h>
void main()
{
    int i,j, array[100], n, odd[100], even[100], k = 0, l = 0,sum=0,count;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++)
    {    
        scanf("%d", &array[i]);
        sum+=array[i];
    }
    printf("Sum of Array: %d\nOriginal Array:\n",sum);
    for(i=0;i<n;i++)
        printf("%d ",array[i]);
    if(sum<100)
    {
        for(i=0;i<n;i++)
        {   
            count=0;
            for(j=0;j<n;j++)
            {
                if(array[i]==array[j] && i!=j && array[i]%2!=0)
                {
                    count++;
                }
            }
            if(count==0)
            {
                for(j=i;j<n;j++)
                {
                    array[j]=array[j+1];
                }
                n--;
                i--;
            }
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {   
            count=0;
            for(j=0;j<n;j++)
            {
                if(array[i]==array[j] && i!=j && array[i]%2==0)
                {
                    count++;
                }
            }
            if(count==1)
            {
                for(j=i;j<n;j++)
                {
                    array[j]=array[j+1];
                }
                n--;
                i--;
            }
        }
    }
    printf("\nArray after Deletion:\n");
    for(i=0;i<n;i++)
        printf("%d ",array[i]);
}