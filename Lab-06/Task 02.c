#include <stdio.h>

int main() {
    float balance, usage;

    printf("Enter available data balance (MB): ");
    scanf("%f", &balance);

    while(balance > 0) {
        printf("Enter data usage (MB): ");
        scanf("%f", &usage);

        balance -= usage;
        printf("Remaining balance: %.2f MB\n", balance);
    }

    printf("Data balance exhausted.\n");

    return 0;
}
