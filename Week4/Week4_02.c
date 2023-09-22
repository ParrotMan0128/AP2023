#include <stdio.h>

int main() {

	int a, b;
	int count = 0;
	int min;

	scanf("%d %d", &a, &b);

	min = a < b ? a : b;

	for (int i = 1; i <= min; i++) {

		if (a % i == 0 && b % i == 0) {

			printf("%d ", i);
			count++;

		}

	}

	printf("\n공약수는 %d개", count);

	return 0;

}