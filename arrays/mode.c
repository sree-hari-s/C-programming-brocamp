#include<stdio.h>
void main()
{
    int i,N=10;
    float X[]={64630, 11735 ,14216 ,99233 ,14470, 4978 ,73429 ,38120 ,51135 ,67060},mode,temp;
    float count=1,mx=1;
//Mode
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
    mode=X[0];
    for(i=0;i<N;i++)
    {
        if(X[i]==X[i+1])
            count++;
        else {
            count=1;
        }
        if(count>mx)
        {
            mx=count;
            mode=X[i];
        }
    }
    printf("\n%.1f",mode);
}