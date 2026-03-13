#include <stdio.h>

int main() {
    int code;

    do {
        printf("Enter access code: ");
        scanf("%d", &code);

        if(code != 2468) {
            printf("Incorrect code. Try again.\n");
        }

    } while(code != 2468);

    printf("Door Unlocked!\n");

    return 0;
}
