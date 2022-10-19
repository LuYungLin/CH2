#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	double principal = 1000.0;
	double rate= .1;
	int i;
	printf("%4s%21s%10s\n", "Year", "Amount on deposit","Rate");
	
	int year;
	for (year=1;year<=15;++year)
		{
		double amount = principal * pow(1.0 + rate, year);
		printf("%4u%21.2f", year, amount);
		printf("%10.3f\n", rate);
		rate = rate + 0.005;
		}


}