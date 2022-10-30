//Write a program to print the multiplication table of given numbers.
#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int i,num;
	printf("Enter a number to show its multiplication table:");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
		printf("\n%dx%d=%d",i,num,i*num);
	return 0;
}