#include <stdio.h>

int main()
{
	int number,hundred,tensplace,basicunit;
	scanf("%d", &number);
	if (100 <= number && number <= 999)
	{
		if (number - number % 100 * 3 == 0)
		{
			printf("%d", number/100);
		}
		else
		{
			basicunit = number%10;
			tensplace = (number % 100 - basicunit) / 10;
			hundred = (number-number%100)/100;
			number = basicunit * 100 + tensplace * 10 + hundred;
			printf("%d", number);
		}
	}
	else
	{
		printf("-1");
	}
	return 0;
}
