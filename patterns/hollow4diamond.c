#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,k,space,limit=10;
    for(i=1;i<limit;i++)
    {   
        for(j=1;j<limit;j++)
        {
            if(i==limit/2||j==limit/2||i+j<limit/2||i-j>(limit/2)||i+j>(2*limit)-limit/2||j-i>limit/2)
            {
                printf("  ");
            }
            else
                printf("* ");
        }  
        printf("\n");
    }
}