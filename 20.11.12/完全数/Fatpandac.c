#include <stdio.h>

int main()
{
	int m, n, i, j, comnumber, coin=0;
	scanf("%d %d", &m, &n);
	for (i = m; i <= n; i++)
	{
		comnumber = 0;
		for (j = 1; j < i; j++)
		{
			if (!(i%j))
			{
				comnumber += j;
			}
		}
		if (comnumber == i)
		{
			printf("%d ", comnumber);
			coin++;
		}
	}
	if (!coin)
	{
		printf("No Answer");
	}
	return 0;
}
