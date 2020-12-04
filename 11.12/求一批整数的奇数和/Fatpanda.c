#include <stdio.h>

int main()
{
	int sum = 0, num;
	printf("Input integers: ");
	while (1)
	{
		scanf("%d", &num);
		char c = getchar();
		if (num <= 0)
		{
			break;
		}
		else if (num % 2 != 0)
		{
			sum += num;
		}
	}
	printf("The sum of the odd numbers is %d", sum);
	return 0;
}