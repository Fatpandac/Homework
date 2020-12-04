#include <stdio.h>
int main()
{
	int x,y,z,sum;
	float ave;
	scanf("%d %d %d",&x,&y,&z);
	sum = x+y+z;
	ave = sum*1.0/3;
	printf("%d\n",sum);
	printf("%.2f\n",ave);
	return 0;
}