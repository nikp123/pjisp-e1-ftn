#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float M = 2, N = 4;
    int err;

repeat_M:
    printf("M = ");
    err = scanf("%f", &M);
    if(err != 1) goto repeat_M;
repeat_N:
    printf("N = ");
    err = scanf("%f", &N);
    if(err != 1) goto repeat_N;

    float sM, sN;
    sM = 1.0/M;
    sN = 1.0/N;

    printf("Posao bi trebao biti zavrsen za %f dana\n", 1.0/(sM+sN));
}
