#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define STR_MAX 4096

int main(int argc, char *argv[]) {
    char str[STR_MAX];
    scanf("%s", str);

    for(int i=0; i < strlen(str); i++) {
        char c = str[i];
        if(islower(c)) {
            c = toupper(c);
        } else if(isupper(c)) {
            c = tolower(c);
        }
        putchar(c);
    }
    putchar('\n');
}
