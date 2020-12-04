#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c, d, e, f, g;
	printf("Enter an positive integer:\n");
	scanf("%d", &g);
	a = g / 100000;
	b = g / 10000 % 10;
	c = g / 1000 % 10;
	d = g / 100 % 10;
	e = g / 10 % 10;
	f = g % 10;
	printf("The digits are: %3d %3d %3d %3d %3d %3d\n", f,e,d,c,b,a);
	if (g % 9 == 0) 
	{
		printf("Divisible by 9: YES.\n");
	}
	else
	{
		printf("Divisible by 9: NO.\n");
	}
	return 0;
}