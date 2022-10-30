#include<stdio.h>
void main()
{
    int i,j,array[100],temp,limit;
    printf("Enter limit of array:");
    scanf("%d",&limit);
    printf("\nEnter elements:\n");
    for ( i = 0; i < limit; i++)
        scanf("%d",&array[i]);
    j=limit-1;
    for(i=0;i<j;i++)
    {
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
        j--;
    }
    printf("\nArray after reversal:");
    for ( i = 0; i < limit; i++)
    {
        printf("\n%d ",array[i]);
    }
}