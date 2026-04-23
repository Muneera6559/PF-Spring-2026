#include <stdio.h>
#include <string.h>

struct Order {
    int orderID;
    char customer[50];
    char product[50];
    int quantity;
    float unitPrice;
    char status[20];
};
float computeTotal(struct Order o) {
    return o.quantity * o.unitPrice;
}
void filterByStatus(struct Order o[], int n, char *status) {
    for (int i = 0; i < n; i++) {
        if (strcmp(o[i].status, status) == 0) {
            printf("Order ID: %d, Product: %s\n", o[i].orderID, o[i].product);
        }
    }
}
int main() {
    struct Order o[2];
    for (int i = 0; i < 2; i++) {
        printf("Enter Order ID: ");
        scanf("%d", &o[i].orderID);
        
        printf("Enter customer: ");
        scanf("%s", o[i].customer);

        printf("Enter product: ");
        scanf("%s", o[i].product);

        printf("Enter quantity: ");
        scanf("%d", &o[i].quantity);

        printf("Enter price: ");
        scanf("%f", &o[i].unitPrice);

        printf("Enter status: ");
        scanf("%s", o[i].status);
    }
    for (int i = 0; i < 2; i++) {
        printf("Total Bill = %.2f\n", computeTotal(o[i]));
    }
    filterByStatus(o, 2, "Pending");

    return 0;
}