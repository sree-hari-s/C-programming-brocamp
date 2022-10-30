//Write a program to compare two strings without using string functions
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,flag=0;
    char string1[100],string2[100];
    printf("Enter two strings:\n");
    scanf("%s%s",string1,string2);
    while(string1[i]!='\0')
    {
        if(string1[i]!=string2[i])
            flag=1;
        i++;    
    }
    if(flag==1)
        printf("Strings not equal");
    else
        printf("Strings are same");
}