#include <stdio.h>
int main()
{
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2 * i + 1; j++)
		{
			if (j % 2 == 0)
			{

				printf("%d", i + 1);
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	for (i = 2; i >= 0; i--)
	{
		for (j = 0; j < 2 * i + 1; j++)
		{
			if (j % 2 == 0)
			{

				printf("%d", i + 1);
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}