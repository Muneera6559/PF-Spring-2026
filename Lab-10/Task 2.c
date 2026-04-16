#include <stdio.h>
#include <string.h>

int main() {
    char masterPass[] = "fast123";
    char input[50];
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter password: ");
        scanf("%s", input);

        if (strlen(input) == 0) {
            printf("Password cannot be empty!\n");
            continue;
        }

        if (strcmp(input, masterPass) == 0) {
            printf("Login Successful!\n");
            return 0;
        } else {
            attempts++;
            if (strcmp(input, masterPass) < 0) {
                printf("Hint: Alphabetically before the stored password.\n");
            } else {
                printf("Hint: Alphabetically after the stored password.\n");
            }

            if (attempts == 2) {
                printf("Partial match hint (first 3 chars): ");
                if (strncmp(input, masterPass, 3) == 0) {
                    printf("First 3 characters match!\n");
                } else {
                    printf("First 3 characters do not match.\n");
                }
            }
        }
    }

    printf("Account Locked Out.\n");
    return 0;
}