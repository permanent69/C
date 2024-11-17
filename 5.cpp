#include <stdio.h>

int main () {
	char n;
	int i, j;
	scanf("%c", &n);
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 3 - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("%c", n);
		}
		printf("\n");
	}
	for (i = 1; i <= 2; i++) {
		for (j = 1; j <= i; j++)
			printf(" ");
		for (j = 1; j <= 5 - 2 * i; j++) {
			printf("%c", n);
		}
		printf("\n");

	}

	return 0;
}