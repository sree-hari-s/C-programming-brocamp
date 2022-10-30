#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    int i,j,array1[100][100],array2[100][100],sum[100][100],m,n;
    printf("Enter limit of 2d array(mxn):");
    scanf("%d%d",&m,&n);
    printf("Enter values of array1:");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&array1[i][j]);
    printf("Enter values of array2:");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&array2[i][j]);
    printf("\nSum of array1 and array2 is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {    
            sum[i][j]=array1[i][j]+array2[i][j];
            printf("%d ",sum[i][j]);        
        }
        printf("\n");
    }                     
    return 0;   
}