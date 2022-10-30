#include<stdio.h>
void main()
{
    int i,j,n=6;
    char ch='A';
    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(i+j==n+1||j-i==n-1)
                printf("%c",ch);
            else if(i+j==2*n+(n-1)||i-j==2*n-(n+1))
                printf("%c",ch);
            else
                printf(" ");    
        }
        printf("\n");
        if(i<n)
            ch++;
        else
            ch--;    
    }
}