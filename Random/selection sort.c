/*
 ============================================================================
 Name        : selection.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,j,n,array[100],temp;
	printf("Enter limit:");
	scanf("%d",&n);
	printf("\nEnter elements of array:");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	printf("\nSorted array:");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	return EXIT_SUCCESS;
}
