#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N=10,i,j;
    float X[]={64630, 11735 ,14216 ,99233 ,14470, 4978 ,73429 ,38120 ,51135 ,67060},mode,mean,sum=0,median,a,b,temp=0,count=1,mx=1;
    // scanf("%d",&N);
    // for(i=0;i<N;i++)
    //     scanf("%f",&X[i]);
    for(i=0;i<N;i++)
    {
        sum=sum+X[i];
    }
    mean=sum/(N);
    printf("Mean: %.1f\nSorted Array\n",mean);
    //Median
    for(i=0;i<N;i++)
    {   
        for(j=i+1;j<N;j++)
        if(X[i]>X[j])
        {
            temp=X[i];
            X[i]=X[j];
            X[j]=temp;
        }
    }
    for ( i = 0; i < N; i++)
    {
        printf("%.1f ",X[i]);
    }
    if(N%2==0)
    {
        a=X[N/2];
        b=X[(N/2)-1];
        median=(a+b)/2;
        printf("\nMedian: %.1f",median);
    }
    else
        printf("\nMedian: %.1f",X[N/2]);
    //Mode
    mode=X[0];
    for(i=0;i<N;i++)
    {
        if(X[i]==X[i+1])
            count++;
        else
            count=1;
        if(count>mx)
        {
            mx=count;
            mode=X[i];
        }
    }
    printf("\nMode:%.1f",mode);
    return 0;
}
