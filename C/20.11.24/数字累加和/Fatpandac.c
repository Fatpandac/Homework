#include <stdio.h>

int main()
{
	int n, number, sum, i = 1;
	scanf("%d", &n);
	number = sum = 0;
	while (i <= n)
	{
		number = number * 10 + i;
		sum += number;
		i++;
	}
	printf("%d", sum);
	return 0;
}