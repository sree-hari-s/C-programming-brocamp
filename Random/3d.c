#include <stdio.h>
#include <stdlib.h>
int main(void) 
{   
    int i,j,a[100][100],m,n;
    printf("Enter limits of matrix(m*n):");
    scanf("%d%d",&m,&n);
    printf("\nEnter values:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nEntered values are:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
