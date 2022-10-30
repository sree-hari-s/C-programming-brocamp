/*Write a program to check whether a student has passed or 
failed in a subject after he or she enters their mark 
(pass mark for a subject is 50 out of 100).
*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float mark;
    printf("Enter obtained marks out of 100:");
    scanf("%f",&mark);
    if(mark<50)
        printf("Failed");
    else
        printf("Passed");
    return 0;
}