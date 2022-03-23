#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float a = 2;
    int err;

repeat_a:
    printf("a = ");
    err = scanf("%f", &a);
    if(err != 1) goto repeat_a;

    printf("%f gal == %f l\n", a, a*4.54);
}
