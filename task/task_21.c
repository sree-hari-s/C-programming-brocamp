//Write a program to multiply the adjacent values of an array and store it in an another array
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,limit,array[100],newarrray[100];
    printf("Enter limit of the array:");
    scanf("%d",&limit);
    printf("\nEnter values in the array:");
    for(i=0;i<limit;i++)
        scanf("%d",&array[i]);
    printf("\nOutput:\n");
    for(i=0;i<limit;i++)
    {
        newarrray[i]=array[i]*array[i+1];
    }
    for(i=0;i<limit-1;i++)
        printf("%d ",newarrray[i]);
}