#include <stdio.h>

int main() {

	int input;

	while (1) {

		printf("10보다 크고 100보다 작은 정수를 입력하세요: ");

		scanf("%d", &input);

		if (input > 10 && input < 100) {

			break;

		}
		else {

			continue;

		}

	}

	for (int i = 3; i <= input; i += 3) {

		printf("%d ", i);

	}

	return 0;

}