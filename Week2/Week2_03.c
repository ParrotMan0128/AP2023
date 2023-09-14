#include <stdio.h>

#define INCH_TO_CENTIMETER 2.54

int main() {

	double inch;

	scanf("%lf", &inch);

	printf("%lf inch = %lf cm", inch, inch * INCH_TO_CENTIMETER);

	return 0;

}