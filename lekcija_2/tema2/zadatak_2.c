#include <stdio.h>

int main(int argc, char *argv[]) {
	int err, a, b;

retry_a_input:
	printf("a = ");
	err = scanf("%d", &a);
	if(err != 1)
		goto retry_a_input;

retry_b_input:
	printf("b = ");
	err = scanf("%d", &b);
	if(err != 1)
		goto retry_b_input;


	int proizvod = 0;
	for(int i = 0; i < a; i++) {
		proizvod += b;
	}

	int ost = a, dj = 0;
	while(ost > b) {
		ost -= b;
		dj++;
	}

	printf("%d * %d = %d\n",
		a, b, proizvod);
	printf("%d / %d = %d (%d)\n",
		a, b, dj, ost);

}
