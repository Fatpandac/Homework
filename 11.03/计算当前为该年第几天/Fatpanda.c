#include <stdio.h>

int main()
{
	int year, month, day;
	printf("Input year, month, day:");
	scanf("%d %d %d", &year, &month, &day);
	if (year % 4 == 0)
	{
		year = 1;
	}
	else
	{
		year = 0;
	}
	switch (year)
	{
		case 0: day = (month - 1) * 31 - (month / 2 - 1) - 3 + day;printf("Days of year: %d", day);break;
		case 1: day = (month - 1) * 31 - (month / 2 - 1) - 2 + day;printf("Days of year: %d", day);break;
		default:break;
	}
	return 0;
}