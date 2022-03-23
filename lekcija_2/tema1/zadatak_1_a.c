#include <stdio.h>

int main(int argc, char *argv[]) {
	int d[2];

	for(int i = 0; i < 2; i++) {
retry_entry:
		printf("d[%d] = ", i+1);
		int err = scanf("%d", &d[i]);
		if(err != 1) goto retry_entry;
	}

	printf("Veci broj je: %d\n", d[0] > d[1] ? d[0] : d[1]);
}
