#include <stdio.h>

int main()
{
	int floor, room, i, j, k;
	scanf("%d", &floor);
	room = floor-1;
	for (i = 0; i < floor; i++)
	{
		for ( j = 0; j < room-i; j++)
		{
			printf(" ");
		}
		for ( k = 0; k <= i; k++)
		{
			printf("%d ",i+1);
		}
		printf("\n");
	}
	return 0;
}
