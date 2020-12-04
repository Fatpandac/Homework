#include <stdio.h>

int main()
{
	double high = 100,sum = 100;
	int n,i = 1;
	scanf("%d",&n);
	while (1)
	{
		if (!n)
		{
			break;
		}
		high /= 2.0;
		sum += high * 2;
		printf("n=%d，sum=%lf\n", i, sum);
		i++;n--;
	}
	return 0;
}