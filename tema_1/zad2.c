#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float a = 2, b = 4, c = 5;
    int err;

repeat_a:
    printf("a = ");
    err = scanf("%f", &a);
    if(err != 1) goto repeat_a;
repeat_b:
    printf("b = ");
    err = scanf("%f", &b);
    if(err != 1) goto repeat_b;
repeat_c:
    printf("c = ");
    err = scanf("%f", &c);
    if(err != 1) goto repeat_c;

    float s = (a+b+c)/2.0;
    printf("%fcm2\n", sqrt(s*(s-a)*(s-b)*(s-c)));
}
