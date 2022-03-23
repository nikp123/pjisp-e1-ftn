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
    int A[20], err, max = INT_MIN;
    unsigned int n;

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
        if(err != 1)
            goto repeat_A;
    }

    for(int i = 0; i < n; i++) {
        if(A[i] > max) max = A[i];
    }

    printf("Maksimalan broj niza je: %d\n", max);
}
