#include <stdio.h>
#include <string.h>

#define STR_MAX 4096

int main(int argc, char *argv[]) {
    char str[STR_MAX];
    scanf("%s", str);

    for(int i = strlen(str); i > 0; i--) {
        putc(str[i-1], stdout);
    }
    putc('\n', stdout);
}
