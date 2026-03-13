#include <stdio.h>

int main() {
    int N;
    int totalDistance = 0;

    printf("Enter number of days: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        totalDistance += i;
    }

    printf("Total distance covered in %d days = %d km\n", N, totalDistance);

    return 0;
}
