#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j, k, l;
	for (i=1;i<=10;i++)
		{
		for (j = 1; j <= i; j++)
			{
				printf("%s","*");
			}
		printf("\n");
		}
	for (i=10;i>=1;i--)
		{
			for (j=1;j<=i;j++)
				{
				printf("%s","*");
				}
			printf("\n");
	}
	for (i = 10; i >= 1; i--)
	{
		for (j = 9; j >= i; j--)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("%s","*");
		}
		printf("\n");
	}
	for (i = 10; i >= 1; i--)
	{
		for (j = 1; j < i; j++)
		{
			printf(" ");
		}
		for (k = 10; k >= i; k--)
		{
			printf("%s","*");
		}
		printf("\n");
	}


	return 0;
}