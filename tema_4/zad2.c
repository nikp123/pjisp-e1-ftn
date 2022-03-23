#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_STRING 4096

int main(int argc, char  *argv[]) {
    char str[MAX_STRING];
    short c;
    unsigned int i = 0;
    while((c = getchar()) != '\n') {
        str[i++] = c;
    }
    str[i] = '\0';

    bool is_palindrome = true;

    unsigned int skip_a = 0, skip_b = 1, n = strlen(str);
    for(i = 0; i < n; i++) {
        while(isspace(str[i+skip_a]) || ispunct(str[i+skip_a])) {
            skip_a++;
            if(skip_a+i == n) break;
        }
        if(skip_a+i == n) break;
        while(isspace(str[n-i-skip_b]) || ispunct(str[n-i-skip_b])) {
            skip_b++;
            if(skip_b+i == n) break;
        }
        if(skip_b+i == n) break;

        char a = str[i+skip_a], b = str[n-i-skip_b];
        if(isalpha(a))
            a = tolower(a);
        if(isalpha(b))
            b = tolower(b);

        if(a != b) {
            is_palindrome = false;
            break;
        }
    }

    if(is_palindrome)
        printf("Jeste\n");
    else
        printf("Nije\n");
}
