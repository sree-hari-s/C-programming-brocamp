#include<stdio.h>
void main()
{
    int i,j;
    char ch[]={'M','A','L','A','Y','A','L','A','M'};
    for(i=0;ch[i]!='\0';i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",ch[j]);
        }
        printf("\n");
    }
}