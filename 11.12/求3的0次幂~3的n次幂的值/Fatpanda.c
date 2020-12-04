#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	int j = 0;
	printf("Enter n: ");
	scanf("%d",&i);
	while (j <= i)
	{
		printf("pow(3,%d)=%.0lf\n", j, pow(3, j));
		j++;
	}
	return 0;
}