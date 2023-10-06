#include <stdio.h>
#include <math.h>

#define PI 3.14

double compute_radius(double area);

int main() {

	double area, radius;

	scanf("%lf", &area);

	radius = compute_radius(area);

	printf("%.2lf", radius);

	return 0;

}

double compute_radius(double area) {

	double radius = sqrt(area / PI);

	return radius;

}