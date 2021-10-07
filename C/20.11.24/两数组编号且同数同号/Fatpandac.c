#include <stdio.h>

int main()
{
	int j, i, n, num, number[30][2],oldnumber[30][2],index=1;
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		scanf("%d", &num);
		number[i][1] = num;
	}

	for ( i = 0; i < n; i++)
	{
		oldnumber[i][1] = number[i][1];
	}

	for (i = 0;i < n;i++)
	{
		for (j = 0;j < i;j++)
		{
			if (number[i][1] < number[j][1])
			{
				num = number[i][1];
				number[i][1] = number[j][1];
				number[j][1] = num;
			}
		}
	}
	num = 0;

	for (i = 0;i < n;i++)
	{
		if (number[i][1] == number[i + 1][1])
		{
			number[i][0] = number[i + 1][0] = index;
			num++;
		}
		else
		{
			index++;
			number[i + 1][0] = index;
		}
	}

	if (number[0][0] != 1)
	{
		number[0][0] = 1;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (number[i][1] == oldnumber[j][1])
			{
				oldnumber[j][0] = number[i][0];
			}
		}
	}
	for (i = 0;i < n;i++)
	{
		printf("%d ", oldnumber[i][0]);
	}
	return 0;
}
