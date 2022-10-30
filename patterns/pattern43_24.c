#include<stdio.h>
void main()
{
    int i,j,k=1,n=7;
    char ch='A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {   
            if(i%2==0)
                printf("%2d",k);
            else
                printf("%2c",ch);    
        }
        if(i%2==0)
            k=k+1;
        else
            ch=ch+1;
        printf("\n");
    }
}