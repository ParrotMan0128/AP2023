#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;

	scanf("%d", &n);

	int* list = (int*)malloc(sizeof(int) * n * 5);

	for (int i = 0; i < n * 5; i++) {

		scanf("%d", &list[i]);

	}

	for (int i = 0; i < n * 5 - 1; i++)
	{
		for (int j = 0; j < n * 5 - 1 - i; j++)
		{
			if (list[j] < list[j + 1])
			{
				int temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n * 5; i++) {

		printf("%d ", list[i]);

	}

	free(list);

	return 0;

}