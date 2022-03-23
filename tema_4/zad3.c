#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

#define STR_MAX 4096

void c_sucks_balls_for_fuck_sake(void) {
    fflush(stdin);
    __fpurge(stdin);
}

int main(int argc, char *argv[]) {
    char str[STR_MAX], c;
    scanf("%s", str);

    c_sucks_balls_for_fuck_sake();
    scanf("%c", &c);

    unsigned int count = 0;
    for(int i=0; i<strlen(str); i++) {
        if(str[i] == c) {
            count++;
        }
    }

    printf("Unutar stringa '%s' se karakter '%c' pojavljuje %d puta\n",
            str, c, count);
}
