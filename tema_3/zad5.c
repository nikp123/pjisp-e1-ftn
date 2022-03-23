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
    int X[20], A[20], B[20], err;
    unsigned int n, a_count = 0, b_count = 0;

repeat_n:
    printf("n = ");
    c_sucks_balls_for_fuck_sake();
    err = scanf("%u", &n);
    if(err != 1 || n > 20)
        goto repeat_n;

    for(int i = 0; i < n; i++) {
    repeat_X:
        printf("X[%d] = ", i+1);
        c_sucks_balls_for_fuck_sake();
        err = scanf("%d", &X[i]);
        if(err != 1)
            goto repeat_X;
    }

    for(int i = 0; i < n; i++) {
        if(X[i] % 2 == 0)
            A[a_count++] = X[i];
        if(X[i] < 0)
            B[b_count++] = X[i];
    }


    printf("X = [");
    for(int i = 0; i < n; i++) {
        printf("%d", X[i]);
        if(i != n-1) printf(", ");
    }
    printf("].\n");

    printf("A = [");
    for(int i = 0; i < a_count; i++) {
        printf("%d", A[i]);
        if(i != a_count-1) printf(", ");
    }
    printf("].\n");

    printf("B = [");
    for(int i = 0; i < b_count; i++) {
        printf("%d", B[i]);
        if(i != b_count-1) printf(", ");
    }
    printf("].\n");
}
