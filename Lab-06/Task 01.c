#include <stdio.h>

int main() {
    int status, totalCheckedIn = 0;

    for(int i = 1; i <= 25; i++) {
        printf("Enter check-in status for member %d (1 = Checked In, 0 = Absent): ", i);
        scanf("%d", &status);

        if(status == 1) {
            totalCheckedIn++;
        }
    }

    printf("Total members checked in: %d\n", totalCheckedIn);

    return 0;
}
