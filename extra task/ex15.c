#include<stdio.h>
#include<stdlib.h>
void main()
{
    int row,col,space;
    for(row=0;row<10;row++)
    {   
        for(col=0;col<=row;col++){
            printf("*");
        }
        for(space=10-row;space>=1;space--){
            printf(" ");
        }
        for(space=10-row;space>=1;space--){
            printf(" ");
        }
        for(col=0;col<=row;col++){
            printf("*");
        }
        printf("\n");
    }
}