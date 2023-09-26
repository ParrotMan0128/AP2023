#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;
	
	scanf("%d", &n);

	int size_of_array = n * 4;
	int reversed = 0;

	int* array = (int*)malloc(sizeof(int) * size_of_array);

	for (int i = 0; i < size_of_array / 4; i++) {

		for (int j = 0; j < 4; j++) {

			if (reversed == 0) {

				array[i * 4 + j] = i * 4 + j;

			}
			else {

				array[i * 4 + j] = i * 4 + 3 - j;

			}
		}

		if (reversed == 0) {

			reversed = 1;
			continue;

		}
		else {

			reversed = 0;
			continue;

		}

	}

	for (int i = 0; i < size_of_array; i++) {

		printf("%d", array[i]);

		if ((i + 1) % 4 == 0) { printf("\n"); }

	}

	free(array);

	return 0;

}