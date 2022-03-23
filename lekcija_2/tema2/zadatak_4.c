#include <stdio.h>

int main(int argc, char *argv[]) {
	int N,q, err;

retry_N_input:
	printf("N = ");
	err = scanf("%d", &N);
	if(err != 1)
		goto retry_N_input;
	if(N < 2)
		goto retry_N_input;
retry_q_input:
	printf("q = ");
	err = scanf("%d", &q);
	if(err != 1)
		goto retry_q_input;
	if(q < 1)
		goto retry_q_input;

	for(int i = 2; i < N; i++) {
		int r = i/q;
		if(r*q == i) {
			printf("djeljiv %d\n", i);
		}		
	}	
}
