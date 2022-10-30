#include<stdio.h>
#include<limits.h>
void main()
{
    int i,j,n,a[100],closestPositive,closestNegative,sum=0;
    printf("Enter limit:");
    scanf("%d", &n);
    printf("Enter array elements:");
    for (i = 0; i < n; i++)
    {    
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    closestNegative=INT_MIN;
    closestPositive=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            if(a[i]>closestNegative)
                closestNegative=a[i];
        }
        else
        {
            if(a[i]<closestPositive)
                closestPositive=a[i];
        }
    }
    if(sum>=0)
    {
        printf("Closest element to 0 is:%d",closestPositive);
    }
    else
        printf("Closest element to 0 is:%d",closestNegative);
}