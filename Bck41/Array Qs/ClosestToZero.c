#include<stdio.h>
#include<limits.h>
void main()
{
    int i,j,n,a[100],smallestPositive,smallestNegative,sum=0;
    printf("Enter limit:");
    scanf("%d", &n);
    printf("Enter array elements:");
    for (i = 0; i < n; i++)
    {    
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    smallestNegative=INT_MIN;
    smallestPositive=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            if(a[i]>smallestNegative)
                smallestNegative=a[i];
        }
        else
        {
            if(a[i]<smallestPositive)
                smallestPositive=a[i];
        }
    }
    if(sum>0 && smallestPositive<smallestNegative*(-1))
    {
        printf("Closest element to 0 is:%d",smallestPositive);
    }
    else
        printf("Closest element to 0 is:%d",smallestNegative);
}