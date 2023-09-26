#include <stdio.h>

#define SIZE 9

int main() {

	int mx[SIZE];
	int my[SIZE];

	for (int i = 0; i < SIZE; i++) {

		scanf("%d", &mx[i]);

	}

	for (int i = 0; i < SIZE; i++) {

		scanf("%d", &my[i]);
		mx[i] -= my[i];

	}

	for (int i = 0; i < SIZE; i++) {

		printf("%d", mx[i]);

		if ((i + 1) % 3 == 0) {

			printf("\n");

		}
	}

	return 0;

}