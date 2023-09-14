#include <stdio.h>

int main() {

	int x, y, z;
	int sum;

	double avg;

	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);

	sum = x + y + z;
	avg = sum / 3.0;

	printf("sum is %d\n", sum);
	printf("average is %lf\n", avg);

	return 0;

}