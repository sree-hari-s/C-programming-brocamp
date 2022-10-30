//Write a program to find the simple interest.

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int principal;
    float interest,years,SI;
    printf("Enter Principal Amount, Interest rate, Number of years (in order): ");
    scanf("%d%f%f",&principal,&interest,&years);
    printf("\nPrincipal:%d\nInterest:%f\nNumber of years:%f",principal,interest,years);
    SI=((principal*interest*years)/100);
    printf("\nSimple Interest is: %f",SI);
    return 0;
}