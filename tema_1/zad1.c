#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float a = 2, b = 4, c = 5;

    float s = (a+b+c)/2.0;
    printf("%fcm2\n", sqrt(s*(s-a)*(s-b)*(s-c)));
}
