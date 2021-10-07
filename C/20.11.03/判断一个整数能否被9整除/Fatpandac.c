#include <stdio.h>
#include <math.h>

void getNum(int num)
{
	if (num > 9)
	{
		getNum(num/10);
	}
	printf("%3d ",num%10);
}

int main()
{
	int num;
	printf("Enter an positive integer:\n");
	scanf("%d", &num);
	printf("The digits are: ");
	getNum(num);
	printf("\n");
	if (num % 9 == 0)
	{
		printf("Divisible by 9: YES.\n");
	}
	else
	{
		printf("Divisible by 9: NO.\n");
	}
	return 0;
}
