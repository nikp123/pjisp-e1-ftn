#include <stdio.h>

int main(int argc, char *argv[]) {
	for(int i = 100; i < 1000; i++) {
		int a = i/100;
		int b = (i%100) / 10;
		int c = i%10;

		if(i == (a*a*a+b*b*b+c*c*c)) {
			printf("Armstrongov broj %d\n", i);
		}
	}

	return 0;
}
