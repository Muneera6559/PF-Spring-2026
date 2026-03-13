#include <stdio.h>

int main() {
    int units;
    int totalUnits = 0;
    int days = 0;

    printf("Enter daily units (-999 to stop): ");
    scanf("%d", &units);

    while(units != -999) {
        totalUnits += units;
        days++;

        printf("Enter daily units (-999 to stop): ");
        scanf("%d", &units);
    }

    if(days > 0) {
        printf("Average consumption: %.2f units\n", (float)totalUnits/days);
    } else {
        printf("No data entered.\n");
    }

    return 0;
}
