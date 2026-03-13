#include <stdio.h>

int main() {
    int pin;

    printf("Enter PIN: ");
    scanf("%d", &pin);

    while(pin != 445566) {
        printf("Incorrect PIN. Try again: ");
        scanf("%d", &pin);
    }

    printf("Access Granted.\n");

    return 0;
}
