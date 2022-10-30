/*Using the ‘switch case,’ write a program to accept 
an input number from the user and output the day as follows. */
#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int num;
	printf("Enter a numbers to show day(1 to 7):");
	scanf("%d",&num);
	switch(num)
	{
	case 1:
		printf("\nSunday");
		break;
	case 2:
		printf("\nMonday");
		break;
	case 3:
		printf("\nTuesday");
		break;
	case 4:
		printf("\nWednesday");
		break;
	case 5:
		printf("\nThursday");
		break;
	case 6:
		printf("\nFriday");
		break;
	case 7:
		printf("\nSaturday");
		break;
	default:
		printf("\nInvalid input");
		break;
	}
	return 0;
}