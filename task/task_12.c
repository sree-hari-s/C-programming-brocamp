// Write a program to sort an array in descending order
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,j,n,array[100],temp;
	printf("Enter limit of array:");
	scanf("%d",&n);
	printf("\nEnter elements of array:");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(array[i]<array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	printf("\nSorted array in descending order:\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	return 0;
}
