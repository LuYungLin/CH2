#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	float  i,j, k, l, m, limit;
	while (k = -1)
		{
			printf("Enter  account number (-1 to end): ");
			scanf_s ("%f", &i);
			if (i==-1)
				{
					break;
				}
			else
				{
					printf("Enter beginning balance: ");
					scanf("%f", &j);
					printf("Enter total charge: ");
					scanf("%f", &k);
					printf("Enter total credits: ");
					scanf("%f", &l);
					printf("Enter credit limit: ");
					scanf("%f", &m);
					limit = j + k - l;
					if (limit > m)
						{
							printf("Account %7.2f \t\n", i);
							printf("credit limit %7.2f \t\n", m);
							printf("Balance,%7.2f \t\n", limit);
							printf("Credit Limit Exceeds \n");
							printf("\n");
						}
					else 
						{
							printf("\n");
						}
				}
				
			
	}
	return 0;
}