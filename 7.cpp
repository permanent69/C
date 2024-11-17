#include <stdio.h>

int main() {
	int x, y, z, t;
	scanf("%d,%d,%d", &x, &y, &z);

	if (x > y) {
		t = x;
		x = y;
		y = t;
	}
	if (y > z) {
		t = y;
		y = z;
		z = t;
	}
	if (z > x) {
		t = z;
		z = x;
		x = t;
	}
	printf("%d,%d,%d", x, y, z);
	return 0;

}