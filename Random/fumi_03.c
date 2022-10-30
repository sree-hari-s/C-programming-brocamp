#include<stdio.h>

int main()
{
	int i,j,k=1,p=3,c=3,d=1;
        for(i=1;i<=11;i++)
        {
           if(i==c)
           {
            for(j=1;j<=p;j++)
                printf("*");
                k=k+2;
                c=c+k;
                p=p+3;
                d++;
           }
           else
           {
            for(j=1;j<=d;j++)
                printf("*");
           }
           printf("\n");
        }
}