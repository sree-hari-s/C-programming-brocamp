#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void main()
{
    int i,j,n,a[100],temp,diff,pos_i,pos_j;
    printf("Enter limit:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    diff=INT_MAX;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(abs((a[i]-a[j]))<diff)
            {
                diff=abs((a[i]-a[j]));
                pos_i=i;
                pos_j=j;
            }
        }
    }
    printf("Minumum difference:%d between %d and %d",diff,a[pos_i],a[pos_j]);
}