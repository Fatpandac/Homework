#include <stdio.h>
#include <math.h>
float dist(float x1,float y1,float x2,float y2);
int main()
{
	float x1,y1,x2,y2,distance;
	printf("Input(x1,y1):");
	scanf("%f %f",&x1,&y1);
	printf("Input(x2,y2):");
	scanf("%f %f",&x2,&y2);
	distance = dist(x1,x2,y1,y2);
	printf("Input(x1,y1):%.2f %.2f;Input(x1,y1):%.2f %.2f;distance = %.2f",x1,y1,x2,y2,distance);
	return 0;
}
float dist(float x1,float y1,float x2,float y2)
{
	//printf("%f %f %f %f",x1,x2,y1,y2);
	float distance;
	distance = sqrt(pow(x1-y1,2)+pow(x2-y2,2));
	return distance;
}
