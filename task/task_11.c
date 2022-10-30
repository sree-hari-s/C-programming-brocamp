//Write a program to find the number of even numbers in an array
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,limit,array[100],count=0;
    printf("Enter array limit(100):");
	scanf("%d",&limit);
	printf("\nEnter values of array:");
	for(i=0;i<limit;i++)
	{    
        scanf("%d",&array[i]);
        if(array[i]%2==0)
            count++;
    }
    printf("\nNumber of even numbers in the given array is:%d",count);
    return 0;
}