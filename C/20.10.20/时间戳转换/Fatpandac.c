#include <stdio.h>

int main()
{
	int total,hours,minutes,seconds;
	printf("Please input time in seconds:\n");
	scanf("%d",&total);
	hours = total/3600;
	total = total-hours*3600;
	minutes = total/60;
	total = total-minutes*60;
	seconds = total;
	printf("Hours: %d\nMinutes: %d\nSeconds: %d",hours,minutes,seconds);
	return 0;
}
