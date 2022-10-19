#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int w = 1;
	float i, j, k, l;
	while (w==1)
	{
		printf("Enter loan principal: ");
		scanf("%f", &i);
		if (i==-1)
			{
			break;
			printf("\n");
			}
		else
			{
				printf("Enter interest rate: ");
				scanf("%f", &j);
				printf("Enter term of the loan in days: ");
				scanf("%f", &k);
				l = i * j *k / 365;
				printf("The interest charge is : %7.2f \n", l);
				printf("\n");
				
			}
	
	
	}
		
		

		return 0;
	
	
	

}