/*If the weight of the parcel is less than 500gm or equal to 500gm then the parcel charge will be Rs. 200, 
Otherwise there is an additional charge of Rs.170 per each extra 500gm*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int weight,charge=200,extraCharge=0,total;
    printf("Enter weight of the parcel: ");
    scanf("%d",&weight);
    if(weight<=500)
    {
        extraCharge=0;
    }
    else
    {
        extraCharge=((weight-500)/500)*170;
    }
    total=charge+extraCharge;
    printf("\nTotal charge=%d",total);
}