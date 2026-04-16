#include <stdio.h>
#include <string.h>

int main() {
    char email[50], dest[100], display[110] = "Email: ";
    char *domain;

    printf("Enter email: ");
    scanf("%s", email);

    strcpy(dest, email);
    char *at_ptr = strchr(dest, '@');

    if (at_ptr != NULL) {
        domain = at_ptr + 1; 
        printf("Domain: %s\n", domain);

        if (strstr(domain, ".") != NULL) {
            strcat(display, email);
            printf("%s\n", display);
        } else {
            printf("Error: Domain must contain a '.'\n");
        }
    } else {
        printf("Error: '@' not found!\n");
    }

    return 0;
}