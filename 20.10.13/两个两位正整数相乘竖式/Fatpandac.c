#include <stdio.h>

int main()
{
	int num1,num2,untiPlace,tenPlace;
	scanf("%d %d",&num1,&num2);
	untiPlace = num2%10;
	tenPlace = num2/10;
	printf("%d\n * %d\n",num1,num2);
	printf("------\n");
	printf("%5d\n%4d\n",untiPlace*num1,tenPlace*num1);
	printf("------\n");
	printf("%5d\n",num1*num2);
	return 0;

}

