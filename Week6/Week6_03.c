#include <stdio.h>

void scan_matrix(int* matrix, int r, int c);
void print_matrix(int* matrix, int r, int c);
void find_2D(int* matrix, int r, int c, int value);

int main(void) {

	int r, c;
	int matrix[512];

	printf("matrix shape: ");

	scanf("%d %d", &r, &c);

	scan_matrix(matrix, r, c);

	printf("----------\n");

	print_matrix(matrix, r, c);

	printf("----------\n");

	find_2D(matrix, r, c, matrix[1]);

	return 0;

}

void scan_matrix(int* matrix, int r, int c) {

	for (int i = 0; i < r; i++) {

		for (int j = 0; j < c; j++) {

			scanf("%d", (matrix + i * c + j));

		}

	}

}

void print_matrix(int* matrix, int r, int c) {

	for (int i = 0; i < r; i++) {

		for (int j = 0; j < c; j++) {

			printf("%d ", *(matrix + i * c + j));

		}

		printf("\n");

	}

}

void find_2D(int* matrix, int r, int c, int value) {

	printf("value %d is found at ", value);

	for (int i = 0; i < r; i++) {

		for (int j = 0; j < c; j++) {

			if (*(matrix + i * c + j) == value) {

				printf("(%d, %d) ", i, j);

			}

		}
	}

}