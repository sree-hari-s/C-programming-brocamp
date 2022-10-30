//Write a program to interchange the values of two arrays.
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,array1[100],array2[100],limit,temp[100];
	printf("Enter array limit(100):");
	scanf("%d",&limit);
	printf("\nEnter values of array1:");
	for(i=0;i<limit;i++)
		scanf("%d",&array1[i]);
	printf("\nEnter values of array2:");
	for(i=0;i<limit;i++)
		scanf("%d",&array2[i]);
	printf("\nArray1:\n");
	for(i=0;i<limit;i++)
		printf("%d\t",array1[i]);
	printf("\nArray2:\n");
	for(i=0;i<limit;i++)
		printf("%d\t",array2[i]);
	printf("\nAfter Swapping:\n");
	for(i=0;i<limit;i++)
	{
		temp[i]=array1[i];
		array1[i]=array2[i];
		array2[i]=temp[i];
	}
	printf("Array1:\n");
	for(i=0;i<limit;i++)
		printf("%d\t",array1[i]);
	printf("\nArray2:\n");
	for(i=0;i<limit;i++)
		printf("%d\t",array2[i]);
	return EXIT_SUCCESS;
}