#include <stdio.h>

float applyDiscount(float price, int tier);
void printInvoice(float original, float discounted);

int main() {
    float price, final;
    int tier;

    printf("Enter price and tier: ");
    scanf("%f %d", &price, &tier);

    final = applyDiscount(price, tier);
    printInvoice(price, final);

    return 0;
}

float applyDiscount(float price, int tier) {
    float rate = 0;

    if(tier == 1) rate = 0.05;
    else if(tier == 2) rate = 0.10;
    else if(tier == 3) rate = 0.20;
    else if(tier == 4) rate = 0.30;

    return price - (price * rate);
}

void printInvoice(float original, float discounted) {
    float disc = original - discounted;
    float delivery = 0;

    if(discounted < 2000)
        delivery = 150;

    printf("Original: %.2f\n", original);
    printf("Discount: %.2f\n", disc);
    printf("After: %.2f\n", discounted);
    printf("Delivery: %.2f\n", delivery);
    printf("Total: %.2f\n", discounted + delivery);
}