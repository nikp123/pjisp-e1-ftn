#include <stdio.h>

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

int main(int argc, char *argv[]) {
	int d[3];

	for(int i = 0; i < 3; i++) {
retry_entry:
		printf("d[%d] = ", i+1);
		int err = scanf("%d", &d[i]);
		if(err != 1) goto retry_entry;
	}

	printf("Najmanji broj je: %d\n",
		min(d[0], min(d[1], d[2])));
}
