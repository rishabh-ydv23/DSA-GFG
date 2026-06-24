#include <stdio.h>
#include <string.h>

void checkString(const char *s) {
    int v = 0;
    int c = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o')
            v++;
        else if (s[i] != ' ')
            c++;
    }

    if (v > c)
        printf("Yes");
    else if (c > v)
        printf("No");
    else
        printf("Same");

    printf("\n");
}