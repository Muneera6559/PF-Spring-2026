#include <stdio.h>

int main() {
    float price, total = 0, finalAmount;
    int choice;

    do {
        printf("Enter item price: ");
        scanf("%f", &price);

        if(price > 0) {
            total += price;
        } else {
            printf("Invalid price! Please enter positive value.\n");
        }

        printf("Add another item? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while(choice == 1);

    if(total > 3000) {
        finalAmount = total - (total * 0.10);
        printf("\n10%% discount applied.\n");
    } else {
        finalAmount = total;
    }

    printf("Total Bill: %.2f\n", total);
    printf("Final Payable Amount: %.2f\n", finalAmount);

    return 0;
}
