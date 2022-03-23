#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 30

int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int a[MAX_SIZE], i, n;

    do {
        printf("Unesite broj elemenata niza: ");
        scanf("%d", &n);
    } while(n <= 0 || n > MAX_SIZE);

    for(i = 0; i < n; i++) {
        printf("niz[%d] = ", i);
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), compare);

    printf("[");
    for(i = 0; i < n; i++) {
        if(i > 0) {
            printf(", ");
        }
        printf("%d", a[i]);
    }
    printf("]\n");

    printf("[");
    for(i = n - 1; i >= 0; i--) {
        if(i < n - 1) {
            printf(", ");
        }
        printf("%d", a[i]);
    }
    printf("]\n");

    return 0;
}
