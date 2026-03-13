#include <stdio.h>

int main() {
    int units;
    char customer_type;
    int bill;

    printf("Enter units: ");
    scanf("%d", &units);

    printf("Enter Customer Type (D for Domestic, C for Commercial): ");
    scanf(" %c", &customer_type);

    if (units <= 100) {
        bill = units * 10;
    }
    else if (units <= 300) {
        if (customer_type == 'D') {
            bill = units * 12;
        }
        else if (customer_type == 'C') {
            bill = units * 15;
        }
        else {
            printf("Invalid customer type\n");
        }
    }
    else {
        bill = units * 20;
    }

    printf("Total Bill = Rs. %d\n", bill);

    return 0;
}
