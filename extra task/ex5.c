// Write a Program to copy one string to another without using String Functions?
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i=0,j=0,strlength;
    char string1[100],string[100];
    printf("\nEnter a string: ");
    scanf("%s",string1);
    while(string1[i]!='\0')
    {   
        string[j]=string1[i];
        i++;
        j++;
    }
    string[j]='\0';
    printf("After copying string1 to next string:%s",string);
}