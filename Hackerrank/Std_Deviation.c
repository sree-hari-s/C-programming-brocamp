#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,array[100],limit,sum=0,mean;
    float std_Sum=0,std_Dev;
    printf("Enter limit:");
    scanf("%d",&limit);
    printf("Enter array elements:");
    for(i=0;i<limit;i++)
        scanf("%d",&array[i]);
    for(i=0;i<limit;i++)
    {
        sum+=array[i];
    }
    mean=sum/limit;
    printf("Mean:%d",mean);
    for(i=0;i<limit;i++)
    {
        std_Sum+=pow((array[i]-mean),2);
    }
    std_Dev=sqrt(std_Sum/limit);
    printf("\nStandard Deviation:%.1f",std_Dev);
}