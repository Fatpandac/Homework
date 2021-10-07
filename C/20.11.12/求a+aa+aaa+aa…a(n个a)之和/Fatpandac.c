#include <stdio.h>

int fn(int a, int n);

int main()
{
	int n,a,i,partnum=1,sum=0;
	printf("Input a: ");
	scanf("%d", &a);
	printf("Input n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		partnum = fn(a, i);
		sum += partnum;
	}
	printf("sum=%d",sum);
	return 0;
}

int fn(int a,int n)
{
	int basicnum = 1,number = 0,i;
	for (i = 1; i < n; i++)
	{
		basicnum *= 10;
		number += basicnum* a;
	}
	return number+a;
}
