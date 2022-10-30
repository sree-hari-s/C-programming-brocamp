#include<stdio.h>
#include<stdlib.h>
void stringlength()
{
    int i;
    char string1[100]; 
    printf("\nString Length Function\n");
    printf("\nEnter a string: ");
    scanf("%s",string1);
    while(string1[i]!='\0')
    {
        i++;
    }
    printf("\nString length:%d\n\n",i); 
}
void stringConcat()
{
    int i=0,j=0;
    char string1[100],string2[100],string[200];
    printf("\nString Concatenation Function\n");
    printf("\nEnter a string1: ");
    scanf("%s",string1);
    printf("\nEnter a string2: ");
    scanf("%s",string2);
    while(string1[i]!='\0')
    {
        string[j]=string1[i];
        i++;
        j++;
    }
    i=0;    
    while(string2[i]!='\0')
    {
        string[j]=string2[i];
        i++;
        j++;
    }
    string[j]='\0';
    printf("\nString after Concatenation:\t%s\n\n",string);    
}
void stringReverse()
{
    int i=0,strlength;
    char string1[100],string2[100];
    printf("String Reverse Function\n");
    printf("\nEnter a string: ");
    scanf("%s",string1);
    while(string1[i]!='\0')
    {
        i++;
    }
    strlength=i;
    i=0;
    while(string1[i]!='\0')
    {
        string2[strlength-i-1]=string1[i];
        i++;
    }
    printf("\nString after reversal:\t%s\n\n",string2);
}
void main()
{
    int choice;
    do
    {
        printf("\nMENU:\n1. STRING LENGTH\n2. STRING CONCATENATION\n3. STRING REVERSE\n4. EXIT\nEnter Choice:");
        scanf("%d",&choice);
        printf("\n");
        if(choice==1)
            stringlength();
        else if(choice==2)
            stringConcat();
        else if(choice==3)
            stringReverse();
        else
        {
            printf("Exiting...");
            exit(0);
        }          
    } while (choice!=4);
}