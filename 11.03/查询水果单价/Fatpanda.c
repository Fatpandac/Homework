#include <stdio.h>

int main()
{
	int choose,i;
	printf("[1] apples\n[2] pears\n[3] oranges\n[4] grapes\n[0] exit\n");
	for (i=1;i<=5;i++)
	{
		printf("Enter choice:");
		scanf("%d",&choose);
		switch (choose)
		{
			case 1: printf(" [1] apples price=3.0\n");break;
			case 2: printf(" [2] pears price=2.5\n");break;
			case 3: printf(" [3] oranges price=4.1\n");break;
			case 4: printf(" [4] grapes price=10.2\n");break;
			case 0:  ;break;
			default:printf(" other price=0.0\n");break;
		}
		if (choose == 0)
		{
			break;
		}
	}
	printf(" Thanks\n");
	return 0;
}