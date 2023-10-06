#include <stdio.h>

int main() {

	unsigned short a;
	unsigned short bit = 0x0001;

	scanf("%hu", &a);

	for (int i = 0; i < sizeof(short) * 8; i++) {

		printf("%d", (a & bit) == bit ? 1 : 0);

		bit = bit << 1;

	}

	return 0;

}