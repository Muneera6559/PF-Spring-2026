#include <stdio.h>

int main() {
    int bill;
    float discount, finalAmount;

    printf("Enter total bill amount: ");
    scanf("%d", &bill);

    if (bill >= 5000) {
        discount = bill * 0.20;
    }
    else if (bill >= 3000) {
        discount = bill * 0.10;
    }
    else {
        discount = 0;
    }

    finalAmount = bill - discount;

    printf("Discount: %.2f\n", discount);
    printf("Final Amount to Pay: %.2f\n", finalAmount);

    return 0;
}
