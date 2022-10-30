#include <stdio.h>
void main() 
{
    int num1, num2, c, i, n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    num1 = num2 = 1; 
    printf("%d %d ",num1,num2);
    for(i = 1; i <= n-2; i++) 
    {
        c = num1 + num2;
        printf("%d ", c);
        num1 = num2;
        num2 = c;
    }
}
