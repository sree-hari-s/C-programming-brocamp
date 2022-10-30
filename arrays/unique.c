#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,array[100],limit,count;
    printf("Enter limit:");
    scanf("%d",&limit);
    printf("Enter elements of array:\n");
    for(i=0;i<limit;i++)
        scanf("%d",&array[i]);
    printf("Unique elements are \n");
    for(i=0;i<limit;i++)
    {   
        count=0;
        for(j=0;j<=limit;j++)
        {
            if(array[i]==array[j] && i!=j)
            {
                count++;
            }         
        }
        if(count==0)
        {
            printf("%d ",array[i]);
        }
    }
}