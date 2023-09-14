#include <stdio.h>

int main() {

	int num, a, b, c;

	scanf("%d", &num);

	a = num / 100;
	b = num % 100 / 10;
	c = num % 10;

	printf("%d, %d, %d", a, b, c);

	return 0;

}