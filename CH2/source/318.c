#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float i, j, l;
	int k = 0;
	while (k == 0)
	{
		printf("Enter sales in dollar (-1 to end): ");
		scanf("%f", &i);
		if (i == -1)
		{
			break;
		}
		else
		{
			j = i * 0.09;
			printf("Salary is: %7.2f \n", j + 200);
		}
	}
		
		
	return 0;
}