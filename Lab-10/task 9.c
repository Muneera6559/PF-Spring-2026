#include <stdio.h>

int main() {
    FILE *fptr = fopen("config.txt", "r");

    if (fptr == NULL) {
        printf("Config file not found. Creating default...\n");
        fptr = fopen("config.txt", "w");
        fprintf(fptr, "max_users=50\ntimeout=30\nmode=dark\n");
        printf("Default config.txt created.\n");
        fclose(fptr);
    } else {
        printf("Configuration file found and loaded!\n");
        fclose(fptr);
    }

    return 0;
}