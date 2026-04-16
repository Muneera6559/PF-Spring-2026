#include <stdio.h>

int validatePIN(int s, int e);

int main() {
    int stored = 4729, entered, i;

    for(i = 1; i <= 3; i++) {
        printf("Enter PIN: ");
        scanf("%d", &entered);

        if(validatePIN(stored, entered)) {
            printf("Access granted\n");
            break;
        } else {
            printf("Wrong, left: %d\n", 3 - i);
        }
    }

    if(i > 3)
        printf("Card blocked\n");

    return 0;
}

int validatePIN(int s, int e) {
    if(s == e) return 1;
    else return 0;
}