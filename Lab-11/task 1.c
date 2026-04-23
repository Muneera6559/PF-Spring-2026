#include <stdio.h>


int floorPower(int n) {
    if (n == 1)
        return 100;
    else
        return 2 * floorPower(n - 1);
}
int totalPower(int floors) {
    if (floors == 1)
        return 100;   
    else
        return floorPower(floors) + totalPower(floors - 1);
}

int main() {
    int n;
    printf("Enter number of floors: ");
    scanf("%d", &n);

    printf("Total Power Consumption = %d kWh\n", totalPower(n));
    return 0;
}