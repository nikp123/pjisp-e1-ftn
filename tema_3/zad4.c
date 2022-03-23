#include <stdio.h>
#include <limits.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

void c_sucks_balls_for_fuck_sake(void) {
    fflush(stdin);
    __fpurge(stdin);
}

int main(int argc, char *argv[]) {
    int A[20], err, sr = 0;
    unsigned int n, diff_min = 0;

repeat_n:
    printf("n = ");
    c_sucks_balls_for_fuck_sake();
    err = scanf("%u", &n);
    if(err != 1 || n > 20)
        goto repeat_n;

    for(int i = 0; i < n; i++) {
    repeat_A:
        printf("A[%d] = ", i+1);
        c_sucks_balls_for_fuck_sake();
        err = scanf("%d", &A[i]);
        sr += A[i];
        if(err != 1)
            goto repeat_A;
    }

    sr /= n;

    for(int i = 1; i < n; i++) {
        if(abs(A[i]-sr) < abs(A[diff_min]-sr)) diff_min = i;
    }

    printf("Element niza %d je najblizi srednjoj vrijednosti niza: %d\n", A[diff_min], sr);
}
