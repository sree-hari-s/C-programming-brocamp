//Write a program to accept an array and display it on the console using functions
#include<stdio.h>
#include<stdlib.h>
void getArray(int n)
{
    int i,array1[100];
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&array1[i]); 
}
void displayArray(int n)
{   
    int i,array2[100];
    printf("Display Array: ");
    for(i=0;i<n;i++)   
        printf("%d ",array2[i]); 
}
void main()
{
    int limit;
    printf("Enter the limit of 2d array:");
    scanf("%d",&limit);
    getArray(limit);
    displayArray(limit);
}