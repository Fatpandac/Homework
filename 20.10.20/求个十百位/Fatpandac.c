#include <stdio.h>
int main()
{
	int num,g,s,b;
	scanf("%d",&num);
	g = num%10;
	num = num-g;
	s = num%100/10;
	num = num-s*10;
	b = num/100;
	printf("%d %d %d",g,s,b);
	return 0;
}