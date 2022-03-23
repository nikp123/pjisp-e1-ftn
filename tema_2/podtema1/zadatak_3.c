#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float a, b;	
retry_a:
	printf("a = ");
	int err = scanf("%f", &a);
	if(err != 1) goto retry_a;
retry_b:
	printf("b = ");
	err = scanf("%f", &b);
	if(err != 1) goto retry_b;

	printf("x = %f\n", -b/a);

	return 0;
}
