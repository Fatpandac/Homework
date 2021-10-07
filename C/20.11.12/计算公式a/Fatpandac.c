#include <stdio.h>

int main()
{
	int n, i, j;
	long int product = 1;
	double sum=0,division=0;
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		for ( j = 1; j <= i; j++)
		{
			product *= j;
		}
		division = 1.0 / product*1.0;
		sum += division;
		product = 1;
		division = 0;
	}
	printf("%.10f", sum+1);
	return 0;
}