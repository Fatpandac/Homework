#include<stdio.h>

int main()
{
	int a1, a2, b1, b2;
	int a, b;
	printf("Input a1,a2,b1,b2:");
	scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
	a = a1 * b1 - a2 * b2;
	b = a1 * b2 + a2 * b1;
	printf("(%d+%di)*(%d+%di)=%d+%di", a1, a2, b1, b2, a, b);
	return 0;
}
