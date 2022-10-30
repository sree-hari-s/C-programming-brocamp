//Write a program to identify whether a string is a palindrome or not
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(void) 
{   
    int i,length,flag=0;
    char string1[100];
    printf("Enter a string:");
    scanf("%s",string1);
    length=strlen(string1);
    for(i=0;i<length;i++)
    {
        if(string1[i]!=string1[length-i-1])
            flag=1;
    }
    if(flag==1)
        printf("\n%s is not a Palindrome",string1);
    else
        printf("%s is a Palindrome.",string1);    
    return 0;
}
