#include <stdio.h>

int main() {
    int N;
    int totalRevenue = 0;

    printf("Enter number of tickets: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        totalRevenue += (i * 100);
    }

    printf("Total Revenue = $%d\n", totalRevenue);

    return 0;
}
