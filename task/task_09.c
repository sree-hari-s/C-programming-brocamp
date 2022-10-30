/*
Write a program to print the following pattern (hint: use nested loop)
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}