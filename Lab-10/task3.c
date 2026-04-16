#include <stdio.h>

// function declarations
int totalRuns(int arr[], int n);
int highestScore(int arr[], int n);
int aboveAverage(int arr[], int n, float avg);

int main() {
    int arr[10];
    int i, total, max, count;
    float avg;

    printf("Enter 10 scores:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    total = totalRuns(arr, 10);
    max = highestScore(arr, 10);

    avg = (float) total / 10;

    count = aboveAverage(arr, 10, avg);

    printf("\nTotal: %d\n", total);
    printf("Average: %.2f\n", avg);
    printf("Highest: %d\n", max);
    printf("Above Average: %d\n", count);

    return 0;
}

// function definitions
int totalRuns(int arr[], int n) {
    int i, sum = 0;

    for(i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    return sum;
}

int highestScore(int arr[], int n) {
    int i, max = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int aboveAverage(int arr[], int n, float avg) {
    int i, count = 0;

    for(i = 0; i < n; i++) {
        if(arr[i] > avg) {
            count++;
        }
    }

    return count;
}