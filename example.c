#include <stdio.h>

int main(void) {
	int a, b, c, d;

	a = 408; /* 値 0 の部分を変更する */
	b = a - 48;
	c = b * b;
	d = c / 1000;

	printf("%d\n", 165 - d);
}