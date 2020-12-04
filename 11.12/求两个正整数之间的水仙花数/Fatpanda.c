#include <stdio.h>

int main()
{
	int n, m;
	int is(int number);
	printf("Input m: ");
	scanf("%d", &m);
	printf("Input n: ");
	scanf("%d", &n);
	for (;m <= n;m++)
	{
		if (is(m))
		{
			printf("%d\n", m);
		}
	}
	return 0;
}
int is(int number)
{
	int ones, tens, handreds;
	ones = number % 10;
	tens = number / 10 % 10;
	handreds = number / 100;
	if (number == ones*ones*ones + tens*tens*tens + handreds*handreds*handreds)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}