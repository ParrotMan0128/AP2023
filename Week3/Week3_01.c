#include <stdio.h>

int main() {

	int x, y, z;
	int a, b, c;

	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);

	if (x > y) {

		if (x > z) {

			if (y > z) {

				a = x;
				b = y;
				c = z;

			}
			else {

				a = x;
				b = z;
				c = y;

			}

		}
		else {

			a = z;
			b = x;
			c = y;

		}

	}
	else {

		if (y > z) {

			if (x > z) {


				a = y;
				b = x;
				c = z;

			}
			else {

				a = y;
				b = z;
				c = x;

			}


		}
		else {

			a = z;
			b = y;
			c = x;

		}

	}

	printf("%d %d %d", a, b, c);

}