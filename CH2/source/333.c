#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i=0, j=0, k, l;
	printf("Enter the length: ");
	scanf("%d", &i);
	printf("Enter the breadth: ");
	scanf("%d", &j);
	for (k=0;k<i;k++)
	{
		for (l = 0; l < j; l++)
		{
			if (k == 0 || k == i-1 || l == 0 || l == j-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	
	}
	return 0;


}