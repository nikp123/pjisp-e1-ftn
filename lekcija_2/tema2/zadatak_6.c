#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	bool prime = true;
	int err, n;	
retry_input:
	printf("n = ");
	err = scanf("%d", &n);
	if(err != 1)
		goto retry_input;

	for(int i=2; i<n; i++) {
		if(n%i == 0) {
			prime = false;
			break;
		}
	}

	printf("Broj %d %s\n", n, prime ? "je prost" : "nije prost");
}
