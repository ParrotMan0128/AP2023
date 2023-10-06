#include <stdio.h>

short short_abs(short value) {

	if (value < 0) {

		return value * -1;

	}
	else {

		return value;

	}

}

int main() {

	short a;
	unsigned short bit = 0x8000;

	scanf("%hd", &a);

	a = short_abs(a);

	for (int i = 0; i < sizeof(short) * 8; i++) {

		printf("%d", (a & bit) == bit ? 1 : 0);

		bit = bit >> 1;

	}

	return 0;

}