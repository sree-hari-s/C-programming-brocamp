#include<stdio.h>
int main()
{
	int i,j,n=5;
	int c=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==j)
            {
                printf("%d",j);
            }
            else
            {
                printf("*");
            }
		}
		printf("\n");
	}
	return 0;
}