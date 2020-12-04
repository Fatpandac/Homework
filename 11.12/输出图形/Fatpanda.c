#include <stdio.h>
int main(void) {
	int rows, i, j, k;
	scanf("%d", &rows);
	for (i = 0; i < rows; i++) {
		for (j = 0; j < rows - i; j++) {
			printf(" ");
		}
		for (k = 0; k < (i * 2 - 1); k++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = rows; i != 0;i--) {
		for (j = 0; j < (rows + 1) - i; j++) {
			printf(" ");
		}
		for (k = 0; k < ((i - 1) * 2 - 1); k++) {
			printf("*");
		}
		printf("\n");
	}
}