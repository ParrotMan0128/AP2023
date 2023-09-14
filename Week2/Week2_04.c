#include <stdio.h>

int main() {

	int height;
	double std_weight;

	scanf("%d", &height);

	std_weight = (height - 100) * 0.9;

	printf("%.2lf", std_weight);

	return 0;

}