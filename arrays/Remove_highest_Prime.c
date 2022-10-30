#include <stdio.h>
void main()
{
    int i, j, array[100], limit, count, max,pos;
    printf("Enter limit:");
    scanf("%d", &limit);
    printf("Enter elements of array:\n");
    for (i = 0; i < limit; i++)
        scanf("%d", &array[i]);
    max = 0;
    for(i=0;i<limit;i++)
    {   
        count=0;
        for(j=1;j<=array[i];j++)
        {
            if(array[i]%j==0)
            {
                count++;
            }
        }
    if(count==2)
    {   
        if(array[i]>max)
        {
            max=array[i];
            pos=i;
        }
    }
}
for(i=pos;i<limit;i++)
{
    array[i]=array[i+1];
}
printf("Array after deletion:");
for(i=0;i<limit-1;i++)
{  
    /* if(array[i]==max)
    {}
    else */
        printf("%d ",array[i]);
}
}