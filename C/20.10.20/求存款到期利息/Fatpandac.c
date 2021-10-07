#include <stdio.h>
#include <math.h>

int main()
{
	float money,year,rate,interest;
	printf("Enter money,year and rate:");
	scanf("%f %f %f",&money,&year,&rate);
	interest = money*pow((1+rate),year)-money;
	printf("interest=%.2f",interest);
	return 0;
}
