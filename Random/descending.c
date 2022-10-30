#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int i,j,array[100],limit,temp;
	printf("Enter the size of an array(100) :");
	scanf("%d",&limit);
	printf("\nEnter the values of array:");
	for(i=0;i<limit;i++)
		scanf("%d",&array[i]);
	printf("\nArray:\n");				
	for(i=0;i<limit;i++)
		printf("%d\t",array[i]);
	for(i=0;i<limit-1;i++)
		for(j=i+1;j<limit;j++)
		{
			if(array[i]<array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
    printf("\nSorted Array:\n");				
	for(i=0;i<limit;i++)
		printf("%d\t",array[i]);
   	return 0;
}