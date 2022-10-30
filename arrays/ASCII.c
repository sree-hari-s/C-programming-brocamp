//Accept a char input from the user and display it on the console.
#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
    char character;
    printf("Enter a character: ");
    scanf("%c",&character);
    printf("\nDisplay entered character: %c\nASCII:%d",character,character);
    return 0;
}