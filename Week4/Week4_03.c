#include <stdio.h>

int main() {

	int area;

	scanf("%d", &area);

	for (int i = 1; i <= area; i++) {

		if ((area * 2 / i) < i) {

			break;

		}

		if (area * 2 % i == 0) {

			printf("%d x %d\n", i, (area * 2 / i));

		}

	}

}