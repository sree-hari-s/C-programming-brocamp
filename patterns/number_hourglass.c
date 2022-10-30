#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, row;
    printf("Enter the number of rows: ");
    scanf("%d", &row); // Takes input fromt the user
    printf("\n");
    i = 1;
    while (i <= row)
    {
        j = 1;
        while (j <= i)
        {
            printf(" ");
            j++;
        }
        j = i;
        while (j <= row)
        {
            printf("%d", j); // print number
            printf(" ");     // print space
            j++;
        }
        i++;
        printf("\n"); // move to next line
    }
    i = row - 1;
    while (i >= 1)
    {
        j = 1;
        while (j <= i)
        {
            printf(" "); // print space
            j++;
        }
        j = i;
        while (j <= row)
        {
            printf("%d", j); // print number
            printf(" ");     // print space
            j++;
        }
        i--;
        printf("\n");
    }
    getch();
    return 0;
}