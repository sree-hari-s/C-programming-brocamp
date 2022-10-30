//Write a program to find the two repeating elements in a given array.
#include<stdio.h>
void main()
{
    int i,array[100],limit;
    printf("Enter limit: ");
    scanf("%d",&limit);
    printf("Enter elements: \n");
    for(i=0;i<limit;i++)
        scanf("%d",&array[i]);
    int freq[10000]={0};
    for(i=0;i<limit;i++)
        freq[array[i]]++;
    for(i=0;i<10000;i++)
        if(freq[i]==2)
            printf("Elements that repeats twice are %d ",i);
}