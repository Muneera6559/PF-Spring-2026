#include <stdio.h>

int main() {
    FILE *fptr;
    char product[20];
    int qty;

    fptr = fopen("inventory.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter product and quantity to add: ");
    scanf("%s %d", product, &qty);
    fprintf(fptr, "%s %d\n", product, qty);
    fclose(fptr);

    fptr = fopen("inventory.txt", "r");
    printf("\nCurrent Inventory:\n");
    while (fscanf(fptr, "%s %d", product, &qty) != EOF) {
        printf("%s - %d\n", product, qty);
    }
    fclose(fptr);

    return 0;
}