//Write a program to move all zeros(0’s) to the end of a given array.
#include<stdio.h>
void main()
{
    int i,j,array[100],limit,temp;
    printf("Enter limit:");
    scanf("%d",&limit);
    printf("Enter elements of array:\n");
    for(i=0;i<limit;i++)
        scanf("%d",&array[i]);
    for(i=0;i<limit;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(array[i]==0)
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("\nArray after shifting zeroes to end :\n");
    for (i = 0; i < limit; i++)
        printf("%d ", array[i]);
}