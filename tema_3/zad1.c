#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

void c_sucks_balls_for_fuck_sake(void) {
    fflush(stdin);
    __fpurge(stdin);
}

int main(int argc, char *argv[]) {
    int A[30], err, br;
    unsigned int n, found = 0;

repeat_n:
    printf("n = ");
    c_sucks_balls_for_fuck_sake();
    err = scanf("%u", &n);
    if(err != 1 || n > 30)
        goto repeat_n;

    for(int i = 0; i < n; i++) {
    repeat_A:
        printf("A[%d] = ", i+1);
        c_sucks_balls_for_fuck_sake();
        err = scanf("%d", &A[i]);
        if(err != 1)
            goto repeat_A;
    }

repeat_br:
    printf("br = ");
    c_sucks_balls_for_fuck_sake();
    err = scanf("%d", &br);
    if(err != 1)
        goto repeat_br;

    for(int i = 0; i < n; i++) {
        if(A[i] == br) found++;
    }

    printf("Broj %d se pojavljuje %u puta u nizu A = [", br, found);
    for(int i = 0; i < n; i++) {
        printf("%d", A[i]);
        if(i != n-1) printf(", ");
    }
    printf("].\n");
}


