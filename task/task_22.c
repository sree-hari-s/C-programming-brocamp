#include<stdio.h>
#include<stdlib.h>
int getArray(int m1,int n1)
{
    int i,j,arr1[10][10],arr2[10][10];
    printf("\nEnter 1st array elements: \n");
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
            scanf("%d",&arr1[i][j]);}}

    printf("\nEnter 2nd array elements: \n");
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
            scanf("%d",&arr2[i][j]);}}
    addArray(m1,n1,arr1,arr2);                
}
int addArray(int m2,int n2,int arr1[][10],int arr2[][10])
{
    int i,j,sum[10][10];
    for(i=0;i<m2;i++){
        for(j=0;j<n2;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];}
            }
    displayArray(m2,n2,sum);          
    return 0;    
}
void displayArray(int m3,int n3,int sum[][10])
{
    int i,j;
    printf("\nSum of 2d arrays:\n");
    for(i=0;i<m3;i++){
        for(j=0;j<n3;j++){
            printf("%d ",sum[i][j]);}
            printf("\n");}
}
void main()
{
    int m,n;
    printf("Enter limits of the 2D array: \n");
    scanf("%d%d",&m,&n);
    getArray(m,n);
}