#include <stdio.h>

// function declarations
float totalRevenue(float arr[], int n);
int bestTable(float arr[], int n);
int isProfitable(float total);

int main() {
    float arr[5];
    float total;
    int i, best;

    printf("Enter 5 table bills:\n");

    for(i = 0; i < 5; i++) {
        scanf("%f", &arr[i]);
    }

    total = totalRevenue(arr, 5);
    best = bestTable(arr, 5);

    printf("\nTotal Revenue: %.2f\n", total);
    printf("Best Table: %d\n", best + 1);

    if(isProfitable(total)) {
        printf("Profitable\n");
    } else {
        printf("Not Profitable\n");
    }

    return 0;
}


// function definitions
float totalRevenue(float arr[], int n) {
    float sum = 0;
    int i;

    for(i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    return sum;
}

int bestTable(float arr[], int n) {
    int i, index = 0;

    for(i = 1; i < n; i++) {
        if(arr[i] > arr[index]) {
            index = i;
        }
    }

    return index;
}

int isProfitable(float total) {
    if(total > 10000) {
        return 1;
    } else {
        return 0;
    }
}