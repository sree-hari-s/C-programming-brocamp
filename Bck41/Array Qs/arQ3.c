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
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            a[i]='&';
        }
    }
    for(i=0;i<n;i++)
    {   
        if(a[i]=='&')
            printf("%c",a[i]);
        else
            printf("%d",a[i]);
    }   
}