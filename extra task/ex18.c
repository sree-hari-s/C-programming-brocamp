//lowercase to uppercase
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i;
    char string1[100];
    printf("Enter a string:\n");
    scanf("%s",string1);
    for(i=0;string1[i]!='\0';i++)
    {
        if(string1[i]>='a' && string1[i]<='z')
            string1[i]=string1[i]-32;
    }
    printf("\nString after conversion:\n%s",string1);
}