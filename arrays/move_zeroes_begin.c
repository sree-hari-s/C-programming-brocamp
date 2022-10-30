//Write a program to move all zeros(0’s) to the beginning of a given array.
#include<stdio.h>
void main()
{
    int i,j,array[100],limit,temp;
    printf("Enter limit:");
    scanf("%d",&limit);
    printf("Enter elements of array:\n");
    for(i=0;i<limit;i++)
        scanf("%d",&array[i]);
    temp=limit-1;
    for(i=temp;i>=0;i--)
    {
        if(array[i]!=0)
        {
            array[temp]=array[i];
            temp--;
        }
    }
    for(j=0;j<=temp;j++)
    {
        array[j]=0;
    }
    printf("\nArray after shifting zeroes to the beginning  :\n");
    for (i = 0; i < limit; i++)
        printf("%d ", array[i]);
}
