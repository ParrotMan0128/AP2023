#include <stdio.h>

int main() {

	char c;
	int a, b;

	scanf("%c %d %d", &c, &a, &b);

	if (c == '+') {

		printf("%d", a + b);

	}
	else if (c == '-') {

		printf("%d", a - b);

	}
	else if (c == '*') {

		printf("%d", a * b);

	}
	else if (c == '/') {

		printf("%d", a / b);

	}
	else if (c == '%') {

		printf("%d", a % b);

	}

	return 0;

}