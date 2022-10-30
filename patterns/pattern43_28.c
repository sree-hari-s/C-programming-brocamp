#include<stdio.h>
void main()
{
    int i,j,k,n=5,space;
    for(i=1;i<n;i++)
    {  
        for(space=i;space<=n;space++)
            {printf("  ");} 
        for(j=1,k=i-1;j<=2*i-1;j++)
        {
            j<=i ? k++:k--; 
            printf("%2d",k);
        }
        printf("\n");
    }
}      