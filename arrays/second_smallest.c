//Write a program to find the second smallest number in an array.
#include<stdio.h>
#include<limits.h>
void main()
{
    int i,limit,array[100],min,secondMin;
    printf("Enter limit:");
    scanf("%d", &limit);
     printf("Enter elements of array:\n");
    for (i = 0; i < limit; i++)
        scanf("%d", &array[i]);
    min=array[0];
    for(i=0;i<limit;i++)
    {
        if(array[i]<min)
            min=array[i];
    }
    printf("Smallest element is %d",min);
    secondMin=INT_MAX;
    for(i=0;i<limit;i++)
    {
        if(array[i] <=secondMin && array[i] > min)
            secondMin=array[i];
    }
    printf("\n2nd Smallest element is %d",secondMin);
}