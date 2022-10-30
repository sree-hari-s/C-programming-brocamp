//Write a program to find the second largest number in an array
#include<stdio.h>
#include<limits.h>
void main()
{
    int i,limit,array[100],max=INT_MIN,largest2=INT_MIN;
    printf("Enter limit:");
    scanf("%d", &limit);
    printf("Enter elements of array:\n");
    for (i = 0; i < limit; i++)
        scanf("%d", &array[i]);
   
    for(i=0;i<limit;i++)
    {
        if(array[i]>max)
            max=array[i];
    }
    printf("Largest element is %d",max);
  
    for(i=0;i<limit;i++)
    {
        if(array[i]>largest2 && array[i]<max)
            largest2=array[i];
    }
    printf("\n2nd Largest element is %d",largest2);
}