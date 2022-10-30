/*
 ============================================================================
 Name        : grade.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	printf("Enter mark(out of 100):");
	scanf("%f",&mark);
	if(mark>90)
		printf("\nGrade:A");
	else if(mark<=89 && mark>80)
		printf("\nGrade:B");
	else if(mark<=79 && mark>70)
		printf("\nGrade:C");
	else if(mark<=69 && mark>60)
		printf("\nGrade:D");
	else if(mark<=59 && mark>50)
		printf("\nGrade:E");
	else
		printf("\nFailed");
	return EXIT_SUCCESS;
}
