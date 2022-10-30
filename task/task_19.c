//Income tax is calculation
#include<stdio.h>
#include<stdlib.h>
void main()
{
    float Annual_Income,Tax,IncomeTax;
    printf("Enter the annual income:");
    scanf("%f",&Annual_Income);
    if(Annual_Income>1000000 && Annual_Income<=5000000)
        Tax=0.3;
    else if (Annual_Income>500000 && Annual_Income<=1000000)
        Tax=0.2;
    else if(Annual_Income>250000 && Annual_Income<=500000)
        Tax=0.05;
    else
        Tax=0; 
    IncomeTax=Annual_Income*Tax;
    printf("\nAnnual income:%f",Annual_Income);
    //printf("\nTax percentage:%f",Tax);
    printf("\nIncome Tax amount:%f",IncomeTax);            
}