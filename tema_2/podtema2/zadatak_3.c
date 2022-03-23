#include <stdio.h>
#include <math.h>

int factorial(int n) {
	if(n == 1)
		return 1;

	return n*factorial(n-1);
}


int main(int argc, char *argv[]) {
	int err, n;	
retry_input:
	printf("n = ");
	err = scanf("%d", &n);
	if(err != 1)
		goto retry_input;
	
	printf("Faktorijel prvih %d prirodnih brojeva je %d\n",
		n, factorial(n));	
}

