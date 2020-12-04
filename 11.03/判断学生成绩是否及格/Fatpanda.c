#include <stdio.h>

int main()
{
	int i,grade;
	for (i=1;i<=5;i++)
	{
		printf("Enter grade: ");
		scanf("%d",&grade);
		if (grade>=60)
		{
			printf("Pass\n");
		}else{
			printf("Fail\n");
		}
	}
	return 0;
}