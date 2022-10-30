#include<stdio.h>
int main()
{
    int n=5,i;
    float a[]={10, 40, 30, 50, 20},w_mean,w[]={1, 2, 3, 4, 5},den=0,num=0;
    // scanf("%d",&n);
    // for(i=0;i<n;i++)
    //     scanf("%f",&a[i]);
    // for(i=0;i<n;i++)
    //     scanf("%f",&w);
    for(i=0;i<n;i++)
    {
        den+=w[i];
        num+=((a[i])*w[i]);
    }
    w_mean=num/den;
    printf("%.1f",w_mean);        
    return 0;
}
