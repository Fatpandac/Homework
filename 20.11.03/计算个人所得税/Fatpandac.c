#include <stdio.h>

int main()
{
	float salary,rate,deduction,tax;
	scanf("%f",&salary);
	if (salary<=3500)
	{
		rate=0;deduction=0;
	}
	else if (3500<salary && salary<=5000)
	{
		rate=0.03;deduction=0;
	}
	else if (5000<salary && salary<=8000)
	{
		rate=0.1;deduction=105;
	}
	else if (8000<salary && salary<=12500)
	{
		rate=0.2;deduction=555;
	}
	else if (12500<salary && salary<=38500)
	{
		rate=0.25;deduction=1005;
	}
	else if (38500<salary && salary<=58500)
	{
		rate=0.3;deduction=2755;
	}
	else if (58500<salary && salary<=83500)
	{
		rate=0.35;deduction=5505;
	}
	else if (83500<salary)
	{
		rate=0.45;deduction=13505;
	}
	tax = rate*(salary-3500)-deduction;
	printf("Enter the salary: tax=%.2f",tax);
        return 0;
}
