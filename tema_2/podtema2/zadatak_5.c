#include <stdio.h>

int main(int argc, char *argv[]) {
	int err, n;	
retry_input:
	printf("n = ");
	err = scanf("%d", &n);
	if(err != 1)
		goto retry_input;

	int ost = n;
	while(ost > 1) {
		for(int i=2; i<=ost; i++) {
			if(ost%i == 0) {
				ost/=i;
				printf("cinioc %d\n", i);
				break;
			}
		}
	}
}
