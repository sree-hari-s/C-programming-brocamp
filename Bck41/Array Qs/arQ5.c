#include<stdio.h>
void main()
{
    int i,j,n,a[100],l,temp;
    printf("Enter Limit:");
    scanf("%d",&n);
    printf("Enter array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    j=n-1;
    for(i=0;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    int max=0,secondMax=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>secondMax && a[i]<max)
            secondMax=a[i];
    }
    printf("Reversed array:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nMax:%d\nSecond largest:%d",max,secondMax);
}