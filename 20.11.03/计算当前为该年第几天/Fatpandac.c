#include <stdio.h>

int main()
{
	int year, month, day;
	printf("Input year, month, day:");
	scanf("%d %d %d", &year, &month, &day);
	printf("Days of year: %d",(month - 1) * 31 - (month / 2 - 1) - (3 - (year % 4 == 0)) + day);
	return 0;
}
