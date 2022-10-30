#include<stdio.h>
void main()
{
    int i,pos,num,limit,array[100];
    printf("Enter limit:");
    scanf("%d", &limit);
    printf("Enter elements of array:\n");
    for (i = 0; i < limit; i++)
        scanf("%d", &array[i]);
    printf("Enter the position of element to be added and the element:");
    scanf("%d%d",&pos,&num);
    for(i=limit;i>=pos-1;i--)
    {    
        array[i+1]=array[i];
    }    
    array[pos-1]=num;
    printf("Array after Insertion:\n");
    for(i=0;i<limit+1;i++)
        printf("%d ",array[i]);
}