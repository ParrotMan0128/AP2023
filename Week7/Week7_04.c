#include <stdio.h>
#include <math.h>

float computeFloatSum(int n);
double computeDoubleSum(int n);

//0.550000000000000 0.549999892711639 0.000000107288361
//0.550000000000000 0.550000011920929 0.000000011920929 ??????

int main() {

	int n;

	double dSum;
	float fSum;

	scanf("%d", &n);

	dSum = computeDoubleSum(n);
	fSum = computeFloatSum(n);

	printf("%.15lf %.15f %.15lf", dSum, fSum, fabs(dSum - fSum));

	return 0;

}

float computeFloatSum(int n) {

	float sum = 0;

	for (int i = 1; i <= n; i++) {

		sum += 0.01 * i;

	}

	return sum;

}

double computeDoubleSum(int n) {

	double sum = 0;

	for (int i = 1; i <= n; i++) {

		sum += 0.01 * i;

	}

	return sum;

}

