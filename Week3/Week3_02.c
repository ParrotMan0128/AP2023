#include <stdio.h>
#include <math.h>

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

	if (abs(a - b) > abs(c - b)) {

		printf("%d", a);

	}
	else if (abs(a - b) < abs(c - b)) {

		printf("%d", c);

	}
	else {

		if (a > c) {

			printf("%d", c);

		}
		else {

			printf("%d", a);

		}

	}


}