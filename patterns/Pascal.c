#include<stdio.h>
void main()
{
    int i,j,n=6,k ,space;
    for(i=1;i<=n;i++)
    {   
        k=1;
        for(space=1;space<=n-i;space++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {                   
            printf("%4d",k); 
            k=k*(i-j)/j;   
        }
        printf("\n");
    }
}