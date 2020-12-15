#include <stdio.h>

void calculate(double x,double y,double *he,double *cha,double *ji,double *shang)
{
	*he = x+y;
	*cha = x-y;
	*ji = x*y;
	*shang = x*1.0/y*1.0;
}
int main()
{
	double x,y,he,cha,ji,shang;
	scanf("%lf %lf",&x,&y);
	calculate(x,y,&he,&cha,&ji,&shang);
	printf("%g %g %g %g",he,cha,ji,shang);
	return 0;
}

