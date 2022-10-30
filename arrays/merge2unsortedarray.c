#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j=0,n,m,array1[100],array2[100],array3[100],temp;
    printf("Enter limit of array1:");
    scanf("%d",&m);
    printf("\nEnter elements of array1:\n");
    for ( i = 0; i < m; i++)
        scanf("%d",&array1[i]);
    printf("Enter limit of array2:");
    scanf("%d",&n);
    printf("\nEnter elements of array2:\n");
    for ( i = 0; i < n; i++)
        scanf("%d",&array2[i]); 
    for(i=0;i<m;i++,j++)
    {
        array3[j]=array1[i];
    }   
    for(i=0;i<n;i++,j++)
    {
        array3[j]=array2[i];
    }
    for(i=0;i<m+n;i++)
    {   
        for(j=i+1;j<m+n;j++)
        {
        if(array3[i]>array3[j])
        {
            temp=array3[i];
            array3[i]=array3[j];
            array3[j]=temp;
        }
        }
    }
    printf("New array:\n");
    for(i=0;i<m+n;i++)
        printf("%d ",array3[i]);
}