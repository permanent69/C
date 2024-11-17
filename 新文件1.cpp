#include <stdio.h>

int main() {
	int a, b, c;
	int n = 100;

	for ( n = 100; n <= 999; n++) {
		a = n % 10;
		b = n / 10 % 10;
		c = n / 100;
		if (n == a * a * a + b * b * b + c * c * c)

			printf("水仙花数为：%d", n);












	}
}
