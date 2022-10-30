#include<stdio.h>
#include<stdlib.h>
void main()
{
    int limit,i,j,array[100],temp[100];
    printf("Enter the limit of array:");
    scanf("%d",&limit);
    printf("Enter array elements:\n");
    for(i=0;i<limit;i++)
        scanf("%d",&array[i]);
    printf("Input array is :\n");
    for(i=0;i<limit;i++)
        printf("%d ",array[i]);
    printf("\nRepeating numbers are:\n");
    for(i=0;i<limit;i++)
    {   
        for(j=i+1;j<limit;j++)
        {  
            if(array[i]==array[j])
            {
                printf("%d ",array[i]);
            }            
        }
    }     
}