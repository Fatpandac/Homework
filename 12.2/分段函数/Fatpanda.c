#include <stdio.h>

int sign(int num)
{
	return (num==0)?0:(num>0)?1:-1;
}

int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",sign(num));
	return 0;
}
