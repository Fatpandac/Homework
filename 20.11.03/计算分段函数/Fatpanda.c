#include <stdio.h>

int main()
{
	int x;
	printf("Enter x:");
	scanf("%d", &x);
	if (x > 0)
		printf(" sign(%d)=1", x);
	else if (x == 0)
	{
		printf(" sign(0)=0");
	}
	else if (x < 0)
	{
		printf(" sign(%d)=-1", x);
	}
	return 0;
}