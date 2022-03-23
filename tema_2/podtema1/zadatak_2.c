#include <stdio.h>
#include <math.h>

float f(float a) {
	if(a < 0.0)
		return -7.0;
	if(a < 1.0)
		return powf(a, 0.25)+4.0;
	if(a < 13.0)
		return 2.0*sqrt(a)-5.0;
	return powf(a, 2.0)/9.0;
}

int main(int argc, char *argv[]) {
	float x;
	retry_entry:
	printf("f(x) = ..\tx = ");
	int err = scanf("%f", &x);
	if(err != 1) goto retry_entry;

	printf("f(%f) = %f\n", x, f(x));
}
