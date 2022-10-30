#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,array[100],limit,temp;
    printf("Enter limit of array: ");
    scanf("%d",&limit);
    printf("Enter array elements:");
    for(i=0;i<limit;i++)
        scanf("%d",&array[i]);
    printf("Sorted array:");
    for(i=0;i<limit;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(array[i]<array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(i=0;i<limit;i++)
        printf("%d ",array[i]);    
}