//Write a program to find the sum of all the odd numbers for a given limit
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,num,sum;
	printf("Enter a number limit to display sum of all odd nos:");
	scanf("%d",&num);
	sum=0;
	for(i=1;i<=num;i++){
		if(i%2!=0)
			sum+=i;
	}
	printf("\nSum of odd numbers =%d",sum);
}