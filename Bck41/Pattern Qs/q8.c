#include<stdio.h>
void main()
{
    int i,j,k=1,n=3,m=2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\n",i);
        }
        for(j=1;j<=m;j++)
        {
            printf("%d",k);
            k++;
        }
        m++;
        printf("\n");
    }
}