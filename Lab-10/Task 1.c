#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i, valid = 1;

    printf("Enter student name: ");
    gets(name); 

    int len = strlen(name);

    if (len < 3 || len > 20) {
        valid = 0;
    }

    if (name[0] == ' ' || name[len - 1] == ' ') {
        valid = 0;
    }

    for (i = 0; i < len; i++) {
        if (isdigit(name[i])) {
            valid = 0;
        }
    }

    if (valid) {
        printf("Valid Name\n");
    } else {
        printf("Invalid Name\n");
    }
    printf("Exact length: %d\n", len);

    return 0;
}