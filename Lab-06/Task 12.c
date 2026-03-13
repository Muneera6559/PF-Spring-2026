#include <stdio.h>

int main() {
    int spaces = 50;
    int entry = 1;

    while(spaces > 0 && entry != 0) {

        printf("\nRemaining spaces: %d\n", spaces);
        printf("Enter 1 for car arrival, 0 to stop: ");
        scanf("%d", &entry);

        if(entry == 1) {
            spaces--;
            printf("Car parked successfully.\n");
        }
        else if(entry == 0) {
            printf("Parking process stopped by operator.\n");
        }
        else {
            printf("Invalid input! Enter 1 or 0 only.\n");
        }
    }

    if(spaces == 0) {
        printf("\nParking lot is FULL.\n");
    }

    printf("Final remaining spaces: %d\n", spaces);

    return 0;
}
