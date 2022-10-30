#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int i,array[100],limit,count;
	printf("Enter the size of an array(100) :");
	scanf("%d",&limit);
	printf("\nEnter the values of array:");
	for(i=0;i<limit;i++)
		scanf("%d",&array[i]);
	printf("\nArray1:\n");				
	for(i=0;i<limit;i++)
		printf("%d\t",array[i]);
	count=0;
	for(i=0;i<limit;i++)
	{
		if(array[i]%2==0)
			count++;
	}
	printf("\nNumber of even numbers in the given array is %d",count);	
   	return 0;
}