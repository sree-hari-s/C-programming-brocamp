#include<stdio.h>
void main()
{
    int i,j;
    char ch[]={'I','N','D','I','A'};
    for(i=0;ch[i]!='\0';i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",ch[j]);
        }
        printf("\n");
    }
}