#include<stdio.h>
void main()
{
    int i,num,limit,array[100];
    printf("Enter limit:");
    scanf("%d", &limit);
    printf("Enter elements of array:\n");
    for (i = 0; i < limit; i++)
        scanf("%d", &array[i]);
    printf("Enter the position of element to be deleted:");
    scanf("%d",&num);
    for(i=num-1;i<limit-1;i++)
        array[i]=array[i+1];
    printf("Array after deletion:\n");
    for(i=0;i<limit-1;i++)
        printf("%d ",array[i]);
}