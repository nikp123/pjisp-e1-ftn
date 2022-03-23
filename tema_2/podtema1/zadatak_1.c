#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include <math.h>

int main(int argc, char *argv[]) {
	int d[3];

	for(int i = 0; i < 3; i++) {
retry_entry:
		printf("d[%d] = ", i+1);
		int err = scanf("%d", &d[i]);
		if(err != 1) goto retry_entry;
	}

	float a = (d[0] + d[1] + d[2]) / 3.0;
	float h = 3.0 / (1.0/d[0] + 1.0/d[1] + 1.0/d[2]);
	float g = powf(d[0]*d[1]*d[2], 1.0/3.0);
	float q = sqrt(1.0/3.0*(d[0]*d[0]+d[1]*d[1]+d[2]*d[2]));
	
	printf("Aritmeticka sredina: %f\n", a); 
	printf("Harmonijska sredina: %f\n", h); 
	printf("Geometrijska sredina: %f\n", g); 
	printf("Kvadratna sredina: %f\n", q); 

	return 1;
}
