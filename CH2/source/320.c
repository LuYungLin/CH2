#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int w = 1;
	float i, j, k, l=0.00;
	while (w == 1)
	{
		printf("Enter # of hours to work (-1 to end): ");
		scanf("%f", &i);
		if (i == -1)
		{
			break;
			printf("\n");
		}
		else
		{
			printf("Enter hour rate of the worker: ");
			scanf("%f", &j);
				if (i>40)
					{
					k = 40 * j + (i - 40) * 15;
					printf("Salary is : %7.2f ", k);
					printf("\n");
					}
				else
					{
					k = i * j;
					printf("Salary is : %7.2f \n", k);
					printf("\n");
				
					}
			
		}


	}



	return 0;




}