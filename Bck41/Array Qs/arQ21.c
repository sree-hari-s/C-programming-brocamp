#include<stdio.h>
void main()
{
    int i,j,n,a[100],count,l=0,temp,b[100],l2;
    printf("Enter size of array: \n");
    scanf("%d", &n);
    printf("Enter elements in array: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i=0;i<n;i++)
    {   
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                count++;
            }
        }
        if(count==0)
        {   
            b[l]=a[i];
            l++;
        }
    }
    l2=l-1;
    for(i=0;i<l2;i++,l2--)
    {
        temp=b[l2];
        b[l2]=b[i];
        b[i]=temp;
    }
    printf("\nArray after deletion of duplicates:\n");
    for(i=0;i<l;i++)
        printf("%d ",b[i]);
}