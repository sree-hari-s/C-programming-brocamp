//Read a character from the user and find the ASCII code of that character?
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("ASCII code of %c is %d",ch,ch);
}