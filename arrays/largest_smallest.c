//Write a program to find the largest and smallest number in an array.
#include<stdio.h>
void main()
{
    int i,array[100],limit,min,max;
    printf("Enter limit:");
    scanf("%d",&limit);
    printf("Enter elements of array:\n");
    for(i=0;i<limit;i++)
        scanf("%d",&array[i]);
    min=array[0];
    max=array[0];
    for(i=0;i<limit;i++)
    {
        if(array[i]<min)
        {
            min=array[i];
        }
        else if(array[i]>max)
        {
            max=array[i];
        }          
    } 
    printf("Largest in array is %d\nSmallest in array is %d.",max,min);
}