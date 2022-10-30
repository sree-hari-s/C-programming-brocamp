#include<stdio.h>
#include<stdlib.h>
void main()
{
    int row , col , space;
    for(row=0;row<7;row++)
    {
        for(space=0;space<=7-row;space++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            if(row==col)
                printf("1");
            else
                printf("%d ",col);
        }
        printf("\n");
    }
}   