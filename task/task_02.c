//Accept two inputs from the user and output their sum.

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int number1,number2;
    float sum;
    printf("Enter 2 numbers(integers):");
    scanf("%d%d",&number1,&number2);3
    sum=number1+number2;
    printf("Sum of 2 numbers=%f",sum);
    return 0;
}