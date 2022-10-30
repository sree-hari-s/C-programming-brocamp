#include<stdio.h>
#include<stdlib.h>
int fibonacci(int);
void main()
{
    int n,f;
    printf("Enter the value of n:");
    scanf("%d",&n);
    f=fibonacci(n);
    printf("\nnth number Fibonacci series is %d",f);
}
int fibonacci(int limit)
{
    if(limit==0)
    {
        return 0;
    }
    else if(limit==1)
    {
        return 1;
    }
    else
        return fibonacci(limit-1)+fibonacci(limit-2);
}