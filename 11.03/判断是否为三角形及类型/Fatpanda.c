#include <stdio.h>

int main()
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if (a+b>c && a+c>b && b+c>a)
	{
		if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a)
			printf("right-angled triangle");
		else if (a==b&&b==c)
			printf("equilateral triangle");
		else if (a==b || a==c || b==c)
			printf("isoceles triangle");
		else
			printf("arbitrary triangle");
	}
	else
	{
		printf("It isn't triangle.");
	}
	return 0;
}